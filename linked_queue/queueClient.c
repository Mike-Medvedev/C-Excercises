#include <stdio.h>
#include "queueADT.h"

int main(){
    Queue q = create();
    Queue q2 = create();
    enqueue(q, 50);
    enqueue(q, 25);
    dequeue(q);
    enqueue(q2, 50);
    peek(q);
    peek(q2);
    destroy(&q2);
    if(q2 == NULL) printf("q2 is succesffuly null");
}