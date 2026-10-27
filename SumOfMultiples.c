/**
*Name: SumOfMultiples.c
*Problem 1 - Project Euler
*Mathematical Consideration: The total sum must be void of the sum of multiples of both 3 and 5.
**/

#include<stdio.h>
#include"projectEuler.h"

int main(void)
{
    long int sumM3, sumM5, sumM15; //sumMx means sum of multiples of number 'x'

    sumM3 = (3 * summation(1, 333));
    sumM5 = (5 * summation(1, 199));
    sumM15 = (15 * summation(1, 66));

    printf("\nThe sum of multiples of 3 less than 1000 = %ld\nThe sum of multiples of 5 less than 1000 = %ld", sumM3, sumM5);
    printf("\nThe sum of multiples of 15 less than 1000 = %ld", sumM15);

    printf("\n\n | The sum of multiples of 3 or 5 lessthan 1000 = %ld", ((sumM3 + sumM5) - sumM15));

    return 0;

}
