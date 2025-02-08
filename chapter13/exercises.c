#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 100

#define MAX_WORDS 10

int i = 0;
char words[MAX_WORDS][BUFFER_SIZE], smallest_word[BUFFER_SIZE], largest_word[BUFFER_SIZE];

void print_string(char words[MAX_WORDS][BUFFER_SIZE]);

void print_smallest_word(char words[MAX_WORDS][BUFFER_SIZE]);
void print_largest_word(char words[MAX_WORDS][BUFFER_SIZE]);

/**
 * Find the smallest and largest words in a series of words
 */
int main(){
    smallest_word[0] = '\0';
    largest_word[0] = '\0';

    while(1){
        char inputString[BUFFER_SIZE];
        printf("Enter a word: ");
        gets(inputString);
        printf("You entered %s \r\n", inputString);
        strcpy(words[i++], inputString);
        if(strlen(smallest_word) == 0) strcpy(smallest_word, inputString);
        if(strlen(inputString) < strlen(smallest_word)) strcpy(smallest_word, inputString);
        if(strlen(inputString) > strlen(largest_word)) strcpy(largest_word, inputString);
        if(strlen(inputString) == 4) break;
    }

    print_string(words);
    printf("Smallest word: %s \r\n", smallest_word);
    printf("Largest word: %s\r\n", largest_word);
    
}

void print_string(char words[MAX_WORDS][BUFFER_SIZE]) {
    printf("entered\n");
    for (int i = 0; i < MAX_WORDS; i++) {
        if(words[i][0] == '\0') continue;
        printf("Printing String %d: ", i);
        for(int j = 0; j < BUFFER_SIZE && words[i][j] != 0; j++){
            printf("%c", words[i][j]);
        }
        printf("\r\n");
    }
}

void print_smallest_word(char words[MAX_WORDS][BUFFER_SIZE]){

}
void print_largest_word(char words[MAX_WORDS][BUFFER_SIZE]){
    printf("1");
}


#include <stdio.h>
/**
 * Prints command line arguments in reverse
 */
int main(int argc, char *argv[]){
    printf("Printing arg count %d \r\n", argc);
    printf("Reversed command line arguments: ");
    for(int i = argc - 1; i > 0; i--){
        printf("%s ", argv[i]);
    }
}