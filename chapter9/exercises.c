#include <stdio.h>

void selection_sort(int n[], int size);

int main() {
    int array[10];
    int i = 0;
    int input;

    printf("Enter up to 10 integers (type -1 to stop):\n");

    while (i < 10) {
        scanf("%d", &input);
        if (input == -1) break; 
        array[i] = input;
        printf("You entered: %d\n", input);
        i++;
    }

    printf("Numbers entered: %d\n", i);
    
    printf("Sorting the following stored numbers: ");
    for (int j = 0; j < i; j++) {
        printf("%d ", array[j]);
    }
    printf("\n");
    selection_sort(array, i);


    printf("Printing sorted array: \n");
    for (int j = 0; j < i; j++) {
        printf("%d ", array[j]);
    }

    printf("\nEnd of input.\n");
    return 0;
}

void selection_sort(int n[], int size){
    int maxNum = n[0];
    int maxNumIndex = 0;

    if(size == 0)
        return;


    for(int i = 0; i < size; i++){
        if(n[i] > maxNum) {maxNum = n[i]; maxNumIndex = i;}
    }
    n[maxNumIndex] = n[size - 1];
    n[size - 1] = maxNum;

  
    printf("\n");


    selection_sort(n, size - 1);
}