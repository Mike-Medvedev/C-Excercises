//1 - 3)
#include <stdio.h>
int main(){
    int input;
    int reversed;
    printf("Please enter a three-digit number: ");
    scanf("%d", &input);
    reversed = ((input % 10) * 100) +  ((input / 10 % 10) * 10) + input / 10 / 10;
    printf("The reversal is: %d\n", reversed);
}

//4)
#include <stdio.h>

int calculateOctal(int input, int exp, int octal) {
    if (input == 0) {
        return octal;
    } else {
        octal += (input % 8) * exp;
        return calculateOctal(input / 8, exp * 10, octal);
    }
}

int main() {
    int input;
    int octal = 0;
    printf("Please enter a number between 0 and 32767: ");
    scanf("%d", &input);
    octal = calculateOctal(input, 1, octal);
    printf("In octal your number is: %05d\n", octal);
    return 0;
}
