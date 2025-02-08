//1

#include <stdio.h>

#define LENGTH 100

char message[LENGTH], *p_message = message, ch;

int main(){
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' || (sizeof(message) / sizeof(message[0])) < LENGTH) {
        *p_message++ = ch;
        printf("%c", ch);
    }

    printf("\r\n Reversal is: ");
    for(p_message = &message[LENGTH - 1]; p_message >= &message[0]; p_message--){
        printf("%c", *p_message);
    }

}