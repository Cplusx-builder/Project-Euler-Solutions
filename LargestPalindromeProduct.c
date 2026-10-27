/**
* Project Euler: Problem 3.
* Largest Palindrome Product
* Version: 1.0 //the algorithm is flawed because the mathematical insight was not eaten to the fullest. Upon searching online, I saw the answer
* without my will.
**/

#define UPPERBOUND 1000
#define LOWERBOUND 100
#define NUMBER_OF_DIGITS 6

#include<stdio.h>
#include<math.h>

bool isPalindrome(long int x);

int main(void)
{
    int i, j;
    long int multiplier;

    for (i = UPPERBOUND; i >= LOWERBOUND; i--)
    {
        for (j = UPPERBOUND; j >= LOWERBOUND; j--)
        {
            multiplier = i * j;
            if (isPalindrome(multiplier) == true)
            {
                printf("The largest palindrome = %ld", multiplier);
                return 0;
            }
        }
    }

    return 0;
}

bool isPalindrome(long int x)
{
    int digit, i;

    long int copyOfx, buildBackNum = 0;

    copyOfx = x;

    for(i = 5 ; i > -1 ; i--)
    {
        if (x > 0)
        {
            digit = x % 10;
            buildBackNum = (digit * pow(10, i)) + buildBackNum;
            x = x / 10;
        }
        else
        {
            break;
        }
    }

    if ((copyOfx - buildBackNum) == 0)
    {
        return true;
    }
    else {
        return false;
    }
}
