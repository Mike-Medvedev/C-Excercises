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
    printf("Successfully enqueued data into slot %d\n", q->size);
    
}

void peek(Queue q){
    printf("Printing something? %d\n", q->data[0]);
}
