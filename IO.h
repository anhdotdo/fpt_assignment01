#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include"MyLib.h"

extern const uint8_t *PROGRAM_MODE;           // extern global variable
extern const uint8_t *MESSAGE[];

BoolType isValidChar(uint8_t c);                // prototype
void showMessage(StatusType status);
void showInstruction();