
#include<stdint.h>                      
#include"MyLib.h"

extern int32_t array[100];              // extern global variable
extern uint8_t n;              // length of array

StatusType array_insert(int32_t k);           // prototype
StatusType array_delete(int32_t k);
StatusType array_sortAsc();
StatusType array_sortDesc();
StatusType array_find(int32_t data, int32_t *index);