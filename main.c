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
                            "Data is nonexistent",
                            "Exit"
                            };

int main(){
    uint8_t user_input_char;
    int32_t i, user_input;  
    StatusType status = ARRAY_SUCCESS;      
    do{
        // 1. User input from keyboad
        showInstruction();
        scanf("%c", &user_input_char);
        while (!isValidChar(user_input_char))
        {
            scanf("%c", &user_input_char);
        }
        // 2. Array management function
        switch (user_input_char)
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
            scanf("%d", &user_input);
            status = array_insert(user_input);
            break;
        case 'd':
            printf("Enter location k, (k = 1, 2, ...): ");
            scanf("%d", &user_input);
            status = array_delete(user_input);
            break;
        case 's':
            status = array_sortAsc();
            break;
        case 'x':
            status = array_sortDesc();
            break;
        case 't':
            printf("Enter data: ");
            scanf("%d", &user_input);
            status = array_find(user_input, &i);
            if(i != -1){
                printf("At index: %d\n", i);
            }
            break;
        default:
            status = ARRAY_EXIT;
            break;
        }
        showMessage(status);
    }while(user_input_char != 'e');

    return 0;
}















