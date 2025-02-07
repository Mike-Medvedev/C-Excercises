//Chapter 2 excercies


//1)
    #include <stdio.h>
        int main(){
            printf("Hello, World\n");
        }



// 2)
//     1) Include <stdio.h> is the directive
//     2) 3 printf lines and the return lines are statements


//3)
    #include <stdio.h>

        int main(){
            int height = 8, length = 12, width = 10, volume;

            volume = width * height * length;

            printf("Dimensions %dx%dx%d\n", length, width, height);
            printf("Volume (cubic inches): %d\n", volume);
            printf("Dimensional Weight (pounds): %d\n",  (volume + 165) / 166);
        }



//    4)
        #include <stdio.h>
        int main(){
            int x, y, z;
            float i, j, k;
            printf("Printing ints: %d, %d, %d\n Printing Floats: %f, %f, %f", x, y, x, i, j, k);
        }


/*
    5)
        a

*/

/*
8)
    13
*/

//Programming Projects

// //1)
#include <stdio.h>
#include <stdlib.h>
#define SIZE_OF_CHECKMARK 20

int main(){
    int i, j;
    for(i = 0; i < SIZE_OF_CHECKMARK; i++){
        if( i >= SIZE_OF_CHECKMARK / 2){
            if(SIZE_OF_CHECKMARK - i == 1){
                for(j = 0; j < SIZE_OF_CHECKMARK / 2 - 2  ; j++){
                    printf(" ");
                }
                printf(" *\n");
                break;
            }
            if(SIZE_OF_CHECKMARK / 2 - i < 0){
                for(j = 0; j < i - SIZE_OF_CHECKMARK / 2  ; j++){
                    printf(" ");
                }
            }
            printf("*");
            for(j = 0; j < (SIZE_OF_CHECKMARK - i) - 1; j++){
                
                printf(" ");
                if(j == SIZE_OF_CHECKMARK - i - 2) {
                    printf("*\n");
                }
            
            }
        }
        else {
            for(j = 0; j < SIZE_OF_CHECKMARK - i; j++){
                printf(" ");
                if(j == SIZE_OF_CHECKMARK - 1 - i) {
                    printf("*\n");
                }
            
            }
        }
        
    }
    
}

//2
#include <stdio.h>
#include <math.h>
#define RADIUS 10

float calculateVolumeOfSphere(int radius){
    return (4.0f / 3.0f) * 3.14 * pow(radius, 3);
}


int main(){

    printf("%.3f", calculateVolumeOfSphere(RADIUS));

}

//3
#include <stdio.h>
#define TAX 0.05
int main(){
    float input;
    printf("Enter an amount: ");
    scanf("%f", &input);
    printf("\n");
    printf("With Tax Added: %.3f", input += input * TAX);
}

//7

#include <stdio.h>
int calculateRemainder(int input, int bill);
int main(){
    int bills[]={20, 10, 5, 1};
    int size = sizeof(bills) / sizeof(bills[0]);
    int remainder;
    printf("Enter dollar amount: ");
    scanf("%d", &remainder);
    printf("Entered: %d\n", remainder);
    printf("The least amount of bills required\n");
    for(int i =0; i < size; ++i){
        remainder = calculateRemainder(remainder, bills[i]);
    }
}
int calculateRemainder(int input, int bill){
    int numOfBills = input / bill;
    
    if(numOfBills > 0){
        printf("$%d Bills: %d\n", bill, numOfBills);
        return input - (numOfBills * bill);
    }
    else{
        printf("$%d Bills: 0\n", bill);
        return input - 0;
    }
}

//8)
#include <stdio.h>
int main(){
    printf("\a");
    float loanAmount, interestRate, monthlyPayment;
    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
     printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);
    

}