#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};
struct node *first;

struct node *add_to_list(struct node *list, int n);
struct node *delete_node(struct node *list, int n);
void print_list(struct node *list);


/**
 * Basic Implementation of a linked list
 * 
 * search
 * 
 * delete
 */
int main(){
    first = add_to_list(first, 5);
    first = add_to_list(first, 10);
    first = add_to_list(first, 15);

    print_list(first);
    first = delete_node(first, 10);

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

struct node *delete_node(struct node *list, int n){
    struct node *prev, *cur;

    for(prev = NULL, cur = list; cur != NULL && cur->value != n; prev = cur, cur = cur->next);
    if(cur == NULL) {
        printf("Node was not found\n"); 
        return list;
    }
    if(prev == NULL) {
        printf("\ndeleting node %d and n is in the first node\n", n); 
        list = list->next;
    }
    else {
        printf("\ndeleting node %d\n", n);
        prev->next = cur->next;
    };
    free(cur);
    return list;
}

void print_list(struct node *list){
    struct node *pointer = list;
    printf("\n~~~~Printing linkedlist~~~~~\n");
    do{
        printf("Printing value of node: %d\n", pointer->value);
        pointer = pointer->next;
    }
    while(pointer != NULL);
}