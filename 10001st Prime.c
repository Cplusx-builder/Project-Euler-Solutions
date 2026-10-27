/**
* Project Euler: Problem 7.
* Finding the 10001st Prime Number
**/


#include <stdio.h>
#include <math.h>
#include "ProjectEuler.h"

int main (void)
{
    int count = 0;
    long int i = 2; // the first prime number

    while (true)
    {
        if (isPrime(i) == true)
        {
            count++;
            if (count == 10001)
            {
                printf("%ld is the 10001st prime number.", i);
                return 0;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
}
