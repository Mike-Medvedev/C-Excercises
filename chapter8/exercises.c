#include <stdio.h>
#include <ctype.h>

int main() {
    int i = 0, j;
    char input[20]; 
    char ch;

    printf("Enter a message: ");

    while ((ch = getchar()) != '\n' && i < sizeof(input) - 1) {
        input[i++] = ch;
    }
    input[i] = '\0';

    for (i = 0; input[i] != '\0'; i++) {
        switch (tolower(input[i])) {
            case 'a':
                input[i] = '4';
                break;
            case 'b':
                input[i] = '8';
                break;
            case 'e':
                input[i] = '3';
                break;
            case 'i':
                input[i] = '1';
                break;
            case 'o':
                input[i] = '0';
                break;
            case 's':
                input[i] = '5';
                break;
        }
    }

    int len = i;
    for (j = 0; j < 5 && len + j < 20; j++) {
        input[len + j] = '!';
    }
    if (len + j < 20) {
        input[len + j] = '\0'; 
    }

    printf("Here is your input: %s\n", input);

    return 0;
}


#include <stdio.h>

int main(){
    int i = 0, j = 0, array[5][5];
    char ch;
    int input;

    while(i < 5) {
        printf("Enter row %d: ", i + 1);

        j=0;
        while(j < 5){
            scanf("%d", &input);
            array[i][j] = input;
            j++;
        }
        i++;
    }
    i = 0;
    j = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n\r");
    }
}
