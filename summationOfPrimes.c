/**
* Project Euler Problem 10.
* summationOfPrimes.c
**/

#include <stdio.h>
#include "ProjectEuler.h"

#define TARGET 2000000

int main(void)
{
    long long int sum = 0, i;

    for (i = 2; i <= TARGET; i++)
    {
        if (updatedIsPrime(i))
        {
            sum = sum + i;
        }
    }

    printf("\nThe sum of primes till %ld is = %lld", TARGET, sum);
    return 0;
}
