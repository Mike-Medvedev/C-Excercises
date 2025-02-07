//4

#include <stdio.h>
long double calculateFactorial(int input);
int main(){
    int input;
    long double factorial;
    printf("Enter a positive integer: ");
    scanf("%d", &input);

    factorial = calculateFactorial(input);
    printf("%.1Lf", factorial); 
}
long double calculateFactorial(int input){
if(input == 0){
    return 1;
}
else {
    return input * calculateFactorial(input-1);
}
}

//5 Scrabble

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int scrabble_value = 0;

    printf("Enter a word: ");
    
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);

    
        switch (ch) {
            case 'A': case 'E': case 'I': case 'O': case 'U': case 'L': case 'N': case 'S': case 'T': case 'R':
                scrabble_value += 1;
                break;
            case 'D': case 'G':
                scrabble_value += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                scrabble_value += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                scrabble_value += 4;
                break;
            case 'K':
                scrabble_value += 5;
                break;
            case 'J': case 'X':
                scrabble_value += 8;
                break;
            case 'Q': case 'Z':
                scrabble_value += 10;
                break;
            default:
                break;
        }
    }

    printf("Scrabble value: %d\n", scrabble_value);

    return 0;
}

// 10
// Count vowels in a sentence 

#include <stdio.h>
#include <ctype.h>
int main(){
    int numberOfVowels = 0;
    char c;
    printf("Please enter your word: ");
    while ((c = getchar()) != '\n'){
        
        switch(toupper(c)){
            case 'A': case 'E': case 'I': case 'O': case 'U': case 'Y':
            numberOfVowels += 1;
            break;
            default:
                break;
        }
    }
    printf("Your Word had %d vowels", numberOfVowels);
}


#include <stdio.h>
int main(){

}


//11
#include <stdio.h>
int main(){
    char first_name[20];
    char last_name[20];
    printf("Please enter your first and last name: ");
    scanf("%s", first_name);
    scanf("%s", last_name);
    printf("Printing Your Full Name: %s, %c \n", last_name, first_name[0]);

}

//12
#include <stdio.h>
int main(){
    char first_name[20];
    char last_name[20];
    printf("Please enter your first and last name: ");
    scanf("%s", first_name);
    scanf("%s", last_name);
    printf("Printing Your Full Name: %s, %c \n", last_name, first_name[0]);

}

