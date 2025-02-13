#include <stdio.h>
#include "queueADT.h"

int main(){
    Queue q = create();
    Item t = 50;
    enqueue(q, t);
    peek(q);
}