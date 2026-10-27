/**
* Name: PowerDigitSum.c
* Purpose: Sum the digit of the number 2^1000
* Author: CplusX-Builder
* Date: September 2026
***/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"ProjectEuler.h"

int main(void)
{
    double N = pow(2, 1000);
    int returnValue = sumOfDigits_inBase10(N, 2, 1000);

    printf("the sum of the digits of 2^1000 = %d", returnValue);
    return 0;
}
