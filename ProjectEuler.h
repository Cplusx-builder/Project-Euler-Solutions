#ifndef PROJECTEULER_HEADER_FILES
#define PROJECTEULER_HEADER_FILES

#include<math.h>
#include<string.h>

long int summation(long int startTerm, long int endTerm)
{
    long int numberOfTerms = (endTerm - startTerm) + 1;

    return ((numberOfTerms * (numberOfTerms + 1)) / 2);
}

long int summationSquared(long int startTerm, long int endTerm)
{
    long int numberOfTerms = (endTerm - startTerm) + 1;
    return (((pow(numberOfTerms, 3) / 3) + (pow(numberOfTerms, 2) / 2) + (numberOfTerms / 6) ));
}

long int summationCubed(long int startTerm, long int endTerm)
{
    long int numberOfTerms = (endTerm - startTerm) + 1;
    long int sum = ((numberOfTerms * (numberOfTerms + 1)) / 2);

    return (sum * sum);
}

bool isPrime(long long int x)
{
    if (x <= 0) return false;
    if (x == 1) return false;

    long long int i;
    int numberOfFactors = 0;
    for (i = 1; i <= x; i++)
    {
        if ((x % i == 0))
        {
            numberOfFactors++;
        }
    }

    if (numberOfFactors == 2)
        return true;
    else
    {
        return false; //number is not prime.
    }
}

long long int nextPrime(long long int y)
{
    if (isPrime(y + 1) == true) return (y + 1);
    else nextPrime(y + 1);
}

bool IsPalindrome(long int x)
{
    int sum  = 0;
    int digit;

    while (x > 0)
    {
        digit = x % 10;
        sum = digit - sum; //alternating sum properties of palindromes.
        x = x / 10;
    }

    if (sum == 0)
    {
        return true;
    }
    else {
        return false;
    }
}

int sum(int a, int b, int c)
{
    return (a+b+c);
}

int gcd(int m, int n) // with m > n
{
    int remainder;

    while (remainder > 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    return m;
}

bool updatedIsPrime (long int x)
{
    if ((x <= 0) || (x == 1)) return false; //number is not prime
    if (x == 2) return true;
    if (x % 2 == 0) return false; //notice that the if condition testing for 2 is above.

    for (int i = 1; i*i <= x; i++)
    {
        if (x % i == 0) return false;
    }
    return true;
}

int sumOfDigits_inBase10 (double x, double base, double exponent)
{
    int computationalTerm = exponent * (log10(base));
    int numberOfDigit = floor(computationalTerm) + 1;

    char s[numberOfDigit];
    sprintf(s, "%.0lf", x);
    int sum = 0;

    for(int i = 0; i < strlen(s); i++)
    {
        sum += (s[i] - '0');
    }
return sum;
}

double smallFactorial(long int x)
{
    if (x==0) return 1;
    if (x==1) return 1;
    else return x * smallFactorial(x-1);
}

int sumOfDigits(double x)
{
    int computationalTerm = (log10(x));
    int numberOfDigit = floor(computationalTerm) + 1;

    char s[numberOfDigit];
    sprintf(s, "%.0lf", x);
    int sum = 0;

    for(int i = 0; i < strlen(s); i++)
    {
        sum += (s[i] - '0');
    }
return sum;
}

int changeCharacterToNumber(char c)
{
    int x = c - '0';
    return x;
}

#endif // PROJECTEULER_HEADER_FILES
