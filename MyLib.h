#ifndef _MYLIB_H_
#define _MYLIB_H_

typedef enum{               // kieu du lieu boolean
    false, true
}BoolType;

typedef enum{
    ARRAY_EMPTY,
    ARRAY_SUCCESS,
    ARRAY_OUT_OF_RANGE,
    ARRAY_EXISTENT_DATA,
    ARRAY_NONEXISTENT_DATA
} StatusType;

#endif