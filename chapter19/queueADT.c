#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "queueADT.h"

#define MAX_QUEUE_SIZE 50

struct queue_type{
    int data[MAX_QUEUE_SIZE];
    int size;
};

Queue create(){
    Queue q = malloc(sizeof(struct queue_type));
    if(!q){
        printf("Error allocating space for queue\n");
        exit(1);
    }
    q->size = 0;
    return q;
}

void enqueue(Queue q, Item t){
    if(!q) exit(1);

    q->data[q->size++] = t;
    
}

Item dequeue(Queue q){
    if (!q || q->size == 0) {
        printf("Queue is empty, cannot dequeue.\n");
        exit(1);
    }

    Item dequeued_item = q->data[0];

    for(int i = 0; i < q->size - 1; i++){
        q->data[i] = q->data[i+1];
    }
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
    printf("Printing first item in queue %d\n", q->data[0]);
}
