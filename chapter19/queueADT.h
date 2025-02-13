#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

typedef struct queue_type *Queue;

Queue create();
void enqueue(Queue q, Item t);
Item dequeue(Queue q);
void peek(Queue q);
Item peek_last(Queue q);          
bool is_empty(Queue q);         

#endif