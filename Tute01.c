/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1;
	int mark2;
	int total;
	float avg;
	
	printf("Please enter mark 1 : ");
	scanf("%i", &mark1);
	printf("Please enter mark 2 : ");
	scanf("%d", &mark2);
		
	//calculate total
	total = mark1 + mark2;
	
	//calculate average
	avg= total/2;

	printf("\n\nMark 1: %i\n",mark1);
	printf("Mark 2: %d\n\n",mark2);
	printf("Your total mark is: %d \n",total);
	printf("Avarage is :%f", avg);
  return 0;
}

