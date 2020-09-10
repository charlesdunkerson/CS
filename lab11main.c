/** lab11main.c
* ===========================================================
* Name: Carattini, Patrick 9/8/2020
* Section:T6
* Project: Lab 10
* Purpose: learn
* ===========================================================
*/

 

#include "lab11functs.h"
#include <stdio.h>


int main(){
    int the_number;
    int the_number2;
    int num_rows;


    printf("Give me a number: \n");
    scanf("%d", &the_number);
    printf("The factorial of %d is %d\n", the_number, numFactorial(the_number));

    printf("Hey you give me a number_2: \n");
    scanf("%d", &the_number2);
    
    if (isPrime(the_number2) == 1) {
        printf("%d is a prime number.\n" , the_number2);
    }
    else {
        printf("%d is not a prime number.\n", the_number2);
    }

    printf("Alright yo give me the last number: \n");
    scanf("%d", &num_rows);
    floydsTriangle(num_rows);



    return 0;
}