/**
* Project Euler: Problem 2.
* Largest Palindrome Product
*Mathematical Consideration: A recurrent pattern was established to find the even valued term of the fibonacci sequence.
**/

#define limitingTerm 4.0E06
long int fibonacci(int n);

#include<stdio.h>

int main(void)
{
    long int i = 1, count = 0, sum = 0;

    while(true)
    {
        printf("%ld ", fibonacci(i));
        sum = fibonacci(i) + sum;
        count++;
        i++;

        if (fibonacci(i) > limitingTerm)
        {
            printf("\nThe count is %ld with a fibonacci term of %ld", count-1, fibonacci(i-1));
            break;
        }
    }
    printf("\nThe sum is %ld", sum);

    return 0;
}

long int fibonacci(int n){
    if (n == 1) return 2;
    if (n == 2) return 8;
    else
    {
        return ((4 * fibonacci(n-1)) + fibonacci(n-2));
    }
}


