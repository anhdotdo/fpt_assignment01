#include<stdio.h>
#include"Array.h"
#include"IO.h"

int32_t array[100];
uint8_t n;
const uint8_t *PROGRAM_MODE = "cpidsxte";       // list of program's mode
const uint8_t *MESSAGE[] = {"Array empty", 
                            "Array success", 
                            "Out of range", 
                            "Data is existent", 
                            "Data is nonexistent"
                            };

int main(){
    uint8_t input_char;
    int32_t i, k;  
    StatusType status;      
    do{
        // 1. User input from keyboad
        showInstruction();
        scanf("%c", &input_char);
        while (!isValidChar(input_char))
        {
            scanf("%c", &input_char);
        }
        // 2. Array management function
        switch (input_char)
        {
        case 'c':
            printf("Enter length of array: ");
            scanf("%hhd", &n);
            for(i = 0; i < n; i++){
                printf("Enter array[%d]: ", i);
                scanf("%d", &array[i]);
            }
            break;
        case 'p':
            printf("Your array: ");
            for(i = 0; i < n; i++){
                printf("%d ", array[i]);
            }
            printf("\n");
            break;
        case 'i':
            printf("Enter data: ");
            scanf("%d", &k);
            status = array_insert(k);
            showMessage(status);
            break;
        case 'd':
            printf("Enter location k, (k = 1, 2, ...): ");
            scanf("%d", &k);
            status = array_delete(k);
            showMessage(status);
            break;
        case 's':
            status = array_sortAsc();
            showMessage(status);
            break;
        case 'x':
            status = array_sortDesc();
            showMessage(status);
            break;
        case 't':
            printf("Enter data: ");
            scanf("%d", &k);
            status = array_find(k, &i);
            showMessage(status);
            if(i != -1){
                printf("At index: %d\n", i);
            }
            break;
        }
    }while(input_char != 'e');
    return 0;
}















