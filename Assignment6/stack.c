#include <stdio.h>
#include "stack.h"

int stack[10];
int pointer = -1;

int push(int value){
    if (pointer == 9){
        return 1;
    }
    else{
        pointer = pointer + 1;
        stack[pointer] = value;
        return 0;
    }
}

int pop(int *value){
    if (pointer == -1){
        return 1;
    }
    else {
        *value = stack[pointer];
        pointer = pointer - 1;

        return 0;
    }
}

void printStack(int type){
    printf("Stack: ");
    if (type == 0){
        for (int i = 0; i <= pointer; i++){
            printf("%d ", stack[i]);
        }
    }
    else if (type == 1){
        for (int i = 0; i<= pointer; i++){
            printf("%x ", stack[i]);
        }
    }
    else {
        for (int i = 0; i<= pointer; i++){
            printf("%c ", stack[i]);
        }
    }
    printf("\n\n");
}
