/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

/* Function declarations */
int max(int no1, int no2);
int min(int no1, int no2);

int main() {
   int no1, no2, maximum, minimum;
   
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   
   maximum = max(no1, no2);  // Call maximum function
   minimum = min(no1, no2);  // Call minimum function

   printf("Maximum number is : %d ", max(no1, no2));
   printf("\nMinimum number is : %d ", min(no1, no2));
   printf("\nValue of %d ", multiply(no1, no2));
   return 0;
}

/*
 Find maximum between two numbers.
*/
int max(int no1, int no2)
{
    return (no1 > no2 ) ? no1 : no2;
}

/*
  Find minimum between two numbers.
 */
int min(int no1, int no2) 
{
    return (no1 > no2 ) ? no2 : no1;
}

int multiply(int no1, int no2){
	return no1 + no2;
}

