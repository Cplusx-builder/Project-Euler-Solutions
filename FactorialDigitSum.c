/**
* Name: FactorialDigitSum
* Purpose: Find the Sum of the digits in 100!
* Author: CplusX-Builder
* Date: September 2026
**/

#include<stdio.h>
#include"ProjectEuler.h"
#include<stdlib.h>

#define TARGET 100

int main(void)
{
    double factorialOfTarget = factorial(TARGET);
    printf("\n\nThe factorial of 100 = %.0lf", factorialOfTarget);
    int sumOfDigitOfFactorialOfTarget = sumOfDigits(factorialOfTarget);

    printf("\n\nThe sum of digits of %d! = %d", TARGET, sumOfDigitOfFactorialOfTarget);

return 0;
}
