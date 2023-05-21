#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct items {
    char item[20];
    float price;
    int qty;
};

struct orders {
    char customers[50];
    char date[50];
    int numOfItems;
    struct items itm[50];
};

// Function to generate bill header
void generatedBillHeader(char name[50], char date[30]) {
    printf("\n\n");
    printf("\t    ENA. Restaurant");
    printf("\n\t   -----------------");
    printf("\nDate: %s", date);
    printf("\nInvoice To: %s", name);
    printf("\n");
    printf("------------------------------------------");
    printf("\nItems\t\t");
    printf("Qty\t\t");
    printf("Total\t\t");
    printf("\n-------------------------------------------");
    printf("\n\n");
}

// Function to generate bill body
void generatedBillBody(char item[30], int qty, float price) {
    printf("%s\t\t", item);
    printf("%d\t\t", qty);
    printf("%.2f\t\t", qty * price);
    printf("\n");
}

// Function to generate bill footer
void generatedBillFooter(float total) {
    printf("\n");
    float dis = 0.1 * total;
    float netTotal = total - dis;
    float cgst = 0.09 * netTotal, grandTotal = netTotal + 2 * cgst;
    printf("-----------------------------------------");
    printf("\nSub Total\t\t\t%.2f", total);
    printf("\nDiscount @10%s\t\t\t%.2f", "%", dis);
    printf("\n\t\t\t\t---------");
    printf("\nNet Total\t\t\t%.2f", netTotal);
    printf("\nCGST @9%s\t\t\t%.2f", "%", cgst);
    printf("\nSGST @9%s\t\t\t%.2f", "%", cgst);
    printf("\n-----------------------------------------");
    printf("\nGrand Total\t\t\t%.2f", grandTotal);
    printf("\n-----------------------------------------");
}

int main() {
    float total;
    int opt, n, invoiceFound = 0;
    struct orders ord;
    struct orders order;
    char saveBill = 'y';
    char name[50];
    FILE* fp;

    printf("=========ENA. Restaurant=========");
    printf("\n\nPlease select your preferred operation");
    printf("\n1.Generate Invoice");
    printf("\n2.Show all invoices");
    printf("\n3.Search Invoice");
    printf("\n4.Exit");

    printf("\n\nYour Choice:\t");
    scanf("%d", &opt);
    fgetc(stdin);

    switch (opt) {
        case 1:
            system("cls");
            printf("\nPlease enter the name of the customer: ");
            fgets(ord.customers, 50, stdin);
            ord.customers[strlen(ord.customers) - 1] = '\0';
            strcpy(ord.date, __DATE__);
            printf("\nPlease enter the number of items:\t");
            scanf("%d", &n);
            ord.numOfItems = n;

            for (int i = 0; i < n; i++) {
                fgetc(stdin);
                printf("\n\n");
                printf("Please enter item %d:\t", i + 1);
                fgets(ord.itm[i].item, 20, stdin);
                ord.itm[i].item[strlen(ord.itm[i].item) - 1] = '\0';

                printf("Please enter the quantity:\t");
                scanf("%d", &ord.itm[i].qty);
                printf("Please enter the unit price:\t");
                scanf("%f", &ord.itm[i].price);
                total += ord.itm[i].qty * ord.itm[i].price;
            }

            generatedBillHeader(ord.customers, ord.date);
            for (int i = 0; i < ord.numOfItems; i++) {
                generatedBillBody(ord.itm[i].item, ord.itm[i].qty, ord.itm[i].price);
            }
            generatedBillFooter(total);
            printf("\nDo you want to save the invoice [y/n]:\t");
            scanf(" %c", &saveBill);

            if (saveBill == 'y' || saveBill == 'Y') {
                fp = fopen("RestaurantBill.dat", "a+");
                fwrite(&ord, sizeof(struct orders), 1, fp);
                if (fwrite != 0)
                    printf("\nSuccessfully saved");
                else
                    printf("\nError Saving!");
                fclose(fp);
            }
            break;

        case 2:
            system("cls");
            fp = fopen("RestaurantBill.dat", "r");
            printf("\n  *****Your Previous Invoices*****\n");
            while (fread(&order, sizeof(struct orders), 1, fp)) {
                float tot = 0;
                generatedBillHeader(order.customers, order.date);
                for (int i = 0; i < order.numOfItems; i++) {
                    generatedBillBody(order.itm[i].item, order.itm[i].qty, order.itm[i].price);
                    tot += order.itm[i].qty * order.itm[i].price;
                }
                generatedBillFooter(tot);
            }
            fclose(fp);
            break;

        case 3:
            printf("\nEnter the name of the customer:\t");
            fgetc(stdin);
            fgets(name, 50, stdin);
            name[strlen(name) - 1] = '\0';
            system("cls");
            fp = fopen("RestaurantBill.dat", "r");
            printf("\t*****Invoice of %s*****\n", name);
            while (fread(&order, sizeof(struct orders), 1, fp)) {
                float tot = 0;
                if (strcmp(order.customers, name) == 0) {
                    generatedBillHeader(order.customers, order.date);
                    for (int i = 0; i < order.numOfItems; i++) {
                        generatedBillBody(order.itm[i].item, order.itm[i].qty, order.itm[i].price);
                        tot += order.itm[i].qty * order.itm[i].price;
                    }
                    generatedBillFooter(tot);
                    invoiceFound = 1;
                }
            }
            if (!invoiceFound) {
                printf("\nSorry, the invoice for %s doesn't exist.", name);
            }
            fclose(fp);
            break;

        case 4:
            printf("\n\t\t Bye Bye");
            exit(0);
            break;

        default:
            printf("Invalid Option!");
            printf("\n\n");
            break;
    }

    return 0;
}

