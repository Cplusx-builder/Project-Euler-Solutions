/**
* Project Euler: Problem 6.
* Sum Square Difference
**/


#include <stdio.h>
#include <math.h>
#include "ProjectEuler.h"

int main (void)
{
    printf("The sum square difference is %ld", (((summation(1, 100) * summation(1, 100)) - (summationSquared(1, 100)))) );
}
