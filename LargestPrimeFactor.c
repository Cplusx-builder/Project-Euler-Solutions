/**
* Project Euler: Problem 3
* Largest Prime Factor
*Mathematical Consideration: Divide & Conquer.
**/

#include<stdio.h>
#include"ProjectEuler.h"
#include<stdint.h>

int main(void)
{
    long long int target = 600851475143LL;
    long long int copyOfTarget = target; //because it is a bad idea to change/work with the input value in your code.
    long long int currentPrime = 2; //to avoid data type promotion or demotions.

    while(true)
    {
        if ((copyOfTarget % currentPrime) == 0)
        {
            copyOfTarget = (copyOfTarget / currentPrime);
            if (IsPrime(copyOfTarget) == true)
            {
                printf("The largest Prime Factor of %lld is %ld.", target, copyOfTarget);
                break;
            }
            else
            {
                continue;
            }
        }
        else
        {
            currentPrime = nextPrime(currentPrime);
            continue;
        }
    }

    return 0;
}
