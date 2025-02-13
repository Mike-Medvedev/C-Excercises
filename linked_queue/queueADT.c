#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "queueADT.h"

#define MAX_QUEUE_SIZE 50

struct node{
    int data;
    struct node *next;
};

struct queue_type{
    struct node *head;
    int size;
};

Queue create(){
    Queue q = malloc(sizeof(struct queue_type));
    if(!q){
        printf("Error allocating space for queue\n");
        exit(1);
    }
    q->head = NULL;
    q->size = 0;
    return q;
}

Node enqueue(Queue q, Item t){
    Node new_node = malloc(sizeof(struct node));
    if(!new_node){
        printf("Creating New node failed!");
        exit(1);
    }
    Node old_head = q->head;
    q->head = new_node;
    new_node->data = t;
    new_node->next = old_head;
    q->size++;

    return new_node;
}

Item dequeue(Queue q){
    if (!q || q->size == 0) {
        printf("Queue is empty, cannot dequeue.\n");
        exit(1);
    }

    Item dequeued_item = q->head->data;

    Node old_head = q->head;
    q->head = q->head->next;
    free(old_head);
    q->size--;
    return dequeued_item;
}

void destroy(Queue *q){
    if (!*q) {
        return; 
    }
   free(*q);
   *q = NULL;
}

void peek(Queue q){
    printf("Printing first item in queue %d\n", q->head->data);
}
