#include <stdio.h>
#include "queueADT.h"

int main(){
    Queue q = create();
    Queue q2 = create();
    Item t = 50;
    enqueue(q, t);
    enqueue(q, 25);
    dequeue(q);
    enqueue(q2, t);
    peek(q);
    peek(q2);
    destroy(&q2);
    if(q2 == NULL) printf("q2 is succesffuly null");
}