/** lab10functs.c
* ===========================================================
* Name: Stearns, Jay 9/9/2020
* Section:T6
* Project: Lab 11
* Purpose: learn
* ===========================================================
*/

// *** numFactorial *** //
/**   ----------------------------------------------------------
* @fn  
* @brief <Calculates the factorial of a number using For loops>
* @param <int the_number>
* @return <the factorial>
*/ 
 int numFactorial(int the_number) {
    int i;
    int sumation = 1;

    for (i = 1; i <= the_number; ++i) {
        sumation *= i;
    }
    return sumation;
 }

 // *** numFactorial *** //
/**   ----------------------------------------------------------
* @fn  
* @brief <tells the user if the number_2 is a prime or not>
* @param <a number>
* @return <1 or 0>
*/ 

int isPrime(int the_number2) {
    int i;
    int result = 1;

    for ( i=2; i <= (the_number2 / 2); ++i) {
        if (the_number2 % i == 0) {
            result = 0;
            break;
        }
    }
    return result;
}

 // *** floydsTriangle *** //
/**   ----------------------------------------------------------
* @fn  
* @brief <makes floyds triangle i guess>
* @param <a number>
* @return <nothing >
*/ 
#include <stdio.h>

void floydsTriangle(int num_rows) {
    int i, p, q, j;

    for (i=1; i <= num_rows; i++){
        if (i%2==0)
            {p=1; q=0;}
        else
            {p=0;q=1;}
         
        for (j=1;j<=i;j++) {
            if(j%2==0)
	            printf("%d",p);
	        else
	            printf("%d",q);
        }
     printf("\n");
    }

}
    
