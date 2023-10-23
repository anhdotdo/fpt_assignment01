#include"IO.h"

BoolType isValidChar(uint8_t c){
    uint8_t i;
    for(i = 0; i < strlen(PROGRAM_MODE); i++){
        if(c == PROGRAM_MODE[i]){
            return true;
        }
    }
    return false;
}

void io_inputChar(uint8_t *c){
    scanf("%c", c);
    while (!isValidChar(*c))
    {
        scanf("%c", c);
    }
}

void showMessage(StatusType status){
    printf("%s\n", MESSAGE[status]);
}

void showInstruction(){
    printf("-----------------------MENU-----------------------\n");
    printf("c. Create an interger array\n");
    printf("p. Display the array\n");
    printf("i. Add one element at the array's tail\n");
    printf("d. Delete one element at k location, k=1, 2, ...\n");
    printf("s. Sort the array in ascending order\n");
    printf("x. Sort the array in descending order\n");
    printf("t. Search that x is exist in the array?\n");
    printf("e. Exit the program\n");
    printf("--------------------------\n");
    printf("Which character do you choose?: ");
}

