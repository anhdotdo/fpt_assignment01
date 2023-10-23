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
    uint8_t c;
    int32_t i, k;  
    StatusType status;           
    showInstruction();
    io_inputChar(&c);
    while(c != 'e'){
        switch (c)
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
        showInstruction();
        io_inputChar(&c);
    }
    return 0;
}















