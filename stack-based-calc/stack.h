#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
void push(int operand);
int pop(void);
bool is_full(void);
bool is_empty(void);
void clear_stack(void);
int peek(void);

#endif 
