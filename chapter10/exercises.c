#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

char input;
int stackInput;

int pop();
void push(int elementToAdd);
void peek();
bool is_empty();
bool is_full();




int main(){

    while(1){
        printf("Please enter the following options \r\n 1: To Check the last element of the stack \r\n 2: To push a new element to the stack \r\n"
        "3: To pop the last element from the stack \r\n");
        printf("\r\n You Entered: ");
        scanf(" %c" ,&input);

        switch(input){
            case '1':
                peek();
                break;
            case '2':
                printf("\r\n Please enter a number to add to the stack: ");
                scanf("%d", &stackInput);
                push(stackInput);
                break;  
            case '3':
                printf(" \r\n  You have removed the following element: %d \r\n ",pop());
                break;
            default:
                printf("\r\n Invalid Element please only enter 1 2 or 3 \r\n ");
                break;
        }
    }

}

int pop(){
    if(is_empty()) {
        printf("\r\n Error stack is empty cant pop");
       exit(1);
    }
    int lastItem = contents[top];
    top--;
    return lastItem;
}
void peek(){
    if(is_empty()){
        printf("\r\n Stack is empty! Please push an element \r\n \r\n");
        return;
    }
    if(is_full()){
         printf("\r\nStack is full! Please pop an element \r\n \r\n");
        return;
    }
        printf("\r\n Top Contents: %d \r\n \r\n \r\n ", contents[top]);
    return;
}
void push(int elementToAdd){
    if(is_full()){
        printf("\r\n Error stack is full cant push");
       exit(1);
    }
    printf("\r\n You have pushed %d \r\n", elementToAdd);
    top++;
    contents[top] = elementToAdd;
}

bool is_empty(){
    return top == 0 ? true : false;
}

bool is_full(){
    return top == 100 ? true : false;
}
