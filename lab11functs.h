/** lab10functs.h
* ===========================================================
* Name: Stearns, Jay 9/8/2020
* Section:T6
* Project: Lab 10
* Purpose: learn
* ===========================================================
*/

 

// *** header file guard example *** //
#ifndef LAB11FUNCTS_H
#define LAB11FUNCTS_H

 


// Function prototypes, constants, etc go here...

// *** numFactorial *** //
/**   ----------------------------------------------------------
* @fn  
* @brief <determines if the passed in character is from the 
* first half of the alphabet (a through m, or A through M), or not.>
* @param <character>
* @return <true or false>
*/ 
 int numFactorial(int the_number);

 // *** numFactorial *** //
/**   ----------------------------------------------------------
* @fn  
* @brief <tells the user if the number_2 is a prime or not>
* @param <a number>
* @return <1 or 0>
*/ 
int isPrime(int the_number2);


 // *** floydsTriangle *** //
/**   ----------------------------------------------------------
* @fn  
* @brief <makes floyds triangle i guess>
* @param <a number>
* @return <nothing >
*/ 

void floydsTriangle(int num_rows);

 

#endif //LAB11FUNCTS_H