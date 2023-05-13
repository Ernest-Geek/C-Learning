#include <stdio.h>

int main() {
    // Declares three pointer variables called iPtr of type int,
    // cPtr of type char, and fFloat of type float.
    int *iPtr;
    char *cPtr;
    float *fFloat;

    // Declares three new variables called iNumber of int type,
    // fNumber of float type, and cCharacter of char type.
    int iNumber;
    float fNumber;
    char cCharacter;

    // Assigns the address of each non-pointer variable to the matching pointer variable.
    int i;  // non-pointer variable of type int
    char c; // non-pointer variable of type char
    float f; // non-pointer variable of type float

    iPtr = &i;    // assign the address of i to iPtr
    cPtr = &c;    // assign the address of c to cPtr
    fFloat = &f;  // assign the address of f to fFloat

    // Prints the value of each non-pointer variable.
    i = 10;
    c = 'A';
    f = 3.142;

    printf("The value of i is: %d\n", i);
    printf("The value of c is: %c\n", c);
    printf("The value of f is: %f\n", f);

    // Prints the address of each non-pointer variable.
    printf("The address of i: %p\n", (void *)&i);
    printf("The address of c is: %p\n", (void *)&c);
    printf("The address of f is: %p\n", (void *)&f);

    // Prints the address of each pointer variable.
    printf("The address of iPtr is: %p\n", (void *)&iPtr);
    printf("The address of cPtr is: %p\n", (void *)&cPtr);
    printf("The address of fFloat is: %p\n", (void *)&fFloat);

    return 0;
}


