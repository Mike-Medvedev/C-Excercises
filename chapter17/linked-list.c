#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *first;

struct node *add_to_list(struct node *list, int n);
void print_list(struct node *list);
/**
 * Basic Implementation of a linked list
 */
int main(){
    first = add_to_list(first, 5);
    first = add_to_list(first, 10);

    print_list(first);

}

struct node *add_to_list(struct node *list, int n){
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if(new_node == NULL) printf("Error allocating memory");

    new_node->value = n;
    new_node->next = list;

    return new_node;
}

void print_list(struct node *list){
    struct node *pointer = list;
    do{
        printf("Printing value of node: %d\n", pointer->value);
        pointer = pointer->next;
    }
    while(pointer != NULL);
}