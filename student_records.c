#include <stdio.h>
int main()
{
    FILE *pRead;//This pointer will used to to hold reference to the file being read
    char fname[30];
    char lname[30];
    char id[20];
    float gpa;

    pRead = fopen("reads.dat", "r");
    if (!pRead)
    printf("File cannot be displayed\n");
    else
    printf("\nName\tID\tGPA");
    //read field information from the data file and store in a variable//
    fscanf(pRead, "%s%s%s%f",fname, lname, id, gpa);

    //print variable data to the standard output
    printf("%s %s\t%id\t%.2f", fname, lname, id, gpa);

    fclose(pRead);
}
