#include <stdio.h>
#include "stack.h"
#include "stack.c"

int main(){
    char input;
    int pushedInput;
    int printedInput = 0;
    int poppedInput;

    printf("Welcome to the stack program.\n\n");
    printf("Enter option: ");
    scanf(" %c", &input);
    while(input != 'x'){
        switch(input) {
            case('u'):
                printf("What number? ");
                scanf(" %d", &pushedInput);
                if (push(pushedInput) == 1){
                    printf("Overflow!!!\n");
                }
                printStack(printedInput);
                break;
            case('o'):
                if (pop(&poppedInput) == 0){
                    printf("Popped %d\n", poppedInput);
                }
                else {
                    printf("Underflow!!!\n");
                }
                printStack(printedInput);
                break;
            case('h'):
                printedInput = 1;
                printStack(printedInput);
                break;
            case('c'):
                printedInput = 2;
                printStack(printedInput);
                break;
            case('d'):
                printedInput = 0;
                printStack(printedInput);
                break;

        }
        printf("Enter option: ");
        scanf(" %c", &input);
    }
    printf("Goodbye!");
    printf("\n");
    return 0;
}
