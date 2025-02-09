#include <stdio.h>

int main() {
    int a = 10, b = 20, result;

    asm ("addl %%ebx, %%eax"
        : "=a" (result)   
        : "a" (a), "b" (b)  
    );

    printf("Sum: %d\n", result);
}
