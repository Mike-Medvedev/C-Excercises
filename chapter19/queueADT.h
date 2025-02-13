#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

typedef struct queue_type *Queue;

Queue create();
void destroy(Queue *q);
void enqueue(Queue q, Item t);
Item dequeue(Queue q);
void peek(Queue q);    

#endif