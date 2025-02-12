#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 20
#define MAX_STRINGS 10



char input_buffer[MAX_WORD_LENGTH];
char *strings[MAX_STRINGS];

void sort_words(char *strings[], int num_strings);
void print_sorted_words(char *strings[], int num_strings);

int main(){

    printf("Please enter a series of words!\n");
    printf("Enter an empty return to submit or press q to exit\n");

    int i = 0;
    while(1){
        if(input_buffer[0] == 'q') break;
        strings[i] = malloc(MAX_WORD_LENGTH + 1);
        if(strings[i] == NULL) printf("Error allocating!");
        scanf("%s", input_buffer);
        strings[i] = realloc(strings[i], strlen(input_buffer) + 1);
        if(strings[i] == NULL) printf("Error reallocating!");
        for (int j = 0; input_buffer[j]; j++) {
            input_buffer[j] = tolower(input_buffer[j]);
        }
        strcpy(strings[i], input_buffer);
        i++;
    }
    sort_words(strings, i);
    print_sorted_words(strings, i);
    
}

void sort_words(char *strings[], int num_strings) {
    for (int i = 0; i < num_strings - 1; i++) {
        for (int j = i + 1; j < num_strings; j++) {
            if (strcmp(strings[i], strings[j]) > 0) { 
                char *temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}

void print_sorted_words(char *strings[], int num_strings){
    printf("Printing Sorted words: \n");
    for(int i = 0; i < num_strings; i++){
        printf("%s\n", strings[i]);
    }
}
