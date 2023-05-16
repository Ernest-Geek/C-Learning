/*****Function prototype******/
void displayBoard();
int verifySelection(int, int);
void checkForWin();
/*****End Prototypes*******/

/**Function prototypes for menu_option.c program**/
#ifndef MAIN_H
#define MAIN_H
void enterNewIntegerValue(int *ptr);
void printPointerAddress(int *ptr);
void printIntegerAddress(int *ptr);
void printIntegerValue(int *ptr);
#endif /* MAIN_H */
/**End prototypes**/

/**Function header for the dice game**/
void tossDie(int dice_array[], int num_dice);
/**End prototypes**/
