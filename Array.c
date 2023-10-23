
#include"Array.h"

StatusType array_insert(int32_t k){
    array[n] = k;
    n++;                                    // update length of array
    return ARRAY_SUCCESS;                          
}

StatusType array_delete(int32_t k){       // k = 1, 2, 3, ...
    uint8_t i;
    if(k < 1 || k > n){
        return ARRAY_OUT_OF_RANGE;
    }else{
        for(i = k - 1; i < n-1; i++){
            array[i] = array[i + 1];
        }
        n--;
        return ARRAY_SUCCESS;
    }
}

StatusType array_sortAsc(){
    int32_t i, j;
    if(n == 0){
        return ARRAY_EMPTY;
    }else{
        for(i = 0; i < n; i++){
            for(j = i+1; j < n; j++){
                if(array[i] > array[j]){
                    array[i] = array[i] + array[j];
                    array[j] = array[i] - array[j];
                    array[i] = array[i] - array[j];
                }
            }
        }
        return ARRAY_SUCCESS;
    } 
}

StatusType array_sortDesc(){
    int32_t i, j;
    if(n == 0){
        return ARRAY_EMPTY;
    }else{
        for(i = 0; i < n; i++){
            for(j = i+1; j < n; j++){
                if(array[i] < array[j]){
                    array[i] = array[i] + array[j];
                    array[j] = array[i] - array[j];
                    array[i] = array[i] - array[j];
                }
            }
        }
        return ARRAY_SUCCESS;
    }
}

StatusType array_find(int32_t data, int32_t *index){
    *index = -1;
    int32_t i;
    for(i = 0; i < n; i++){
        if(data == array[i]){
            *index = i;
            return ARRAY_EXISTENT_DATA;
        }
    }
    return ARRAY_NONEXISTENT_DATA;
}