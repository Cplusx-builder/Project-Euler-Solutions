/**
* Name: ThirteenAdjacentDigit.c (Project Euler - Problem 8)
* Purpose: Find the largest product made by 13 digits in a number of 1000 digits
* Author: CplusX-Builder
* Date: October 2026
* Version: 1.0
**/

/**Version 1.0 isn't working. Why?
It fails to consider the blocks of adjacent digits as continuous streams of overlapping digits.
In other words, this is solving another problem. Version 1.1 here am I**/

#include<stdio.h>
#include"ProjectEuler.h"

#define NUMBER_OF_DIGITS 1000
#define NUMBER_OF_ADJACENT_DIGITS 13

void printInDatabase(long long int x);
void identifyLargest(void);

int main(void)
{
    long long int product = 1, countOfNumberRead = 0,convertedNumber;
    char bigNumber[NUMBER_OF_DIGITS + 1] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";

    for (int i = 0; i < NUMBER_OF_DIGITS; i++)
    {
        convertedNumber = changeCharacterToNumber(bigNumber[i]);
        countOfNumberRead = countOfNumberRead + 1;
        product = convertedNumber * product;
        printf("\nProduct = %ld", product);

        if ((countOfNumberRead) == NUMBER_OF_ADJACENT_DIGITS)
        {
            printInDatabase(product);
            countOfNumberRead = 0;
            product = 1;
        }
    }
    identifyLargest();
return 0;
}

void printInDatabase(long long int x)
{
    FILE *filePointer;
    filePointer = fopen("databaseOfProducts.txt", "a");

    if (filePointer == NULL)
    {
        perror("fileOpen");
        return;
    }
    else
    {
        fprintf(filePointer, "%lld\n", x);
        fclose(filePointer);
    }
}

void identifyLargest(void)
{
    FILE *filePtr;
    long long int product, *arrayOfNum, largestProduct;
    int numberOfTerms = ((int) (NUMBER_OF_DIGITS / NUMBER_OF_ADJACENT_DIGITS));
    filePtr = fopen("databaseOfProducts.txt", "r");

    if (filePtr = NULL) {
        perror("Cannot Open databaseOfProducts.txt");
        return;
    } else {
        for (int i = 0; i < numberOfTerms; i++)
        {
            fscanf(filePtr, "%lld", &arrayOfNum[i]);
        }
    /*After getting the numbers, then the ordering*/
    largestProduct = arrayOfNum[0]; //assuming the largest product sits at the beginning of the array.
        for (int j = 0; j < numberOfTerms; j++)
        {
            if (largestProduct < arrayOfNum[j])
            {
                largestProduct = arrayOfNum[j];
            }
        }
        printf("The Largest Product = %lld", largestProduct);
    }
}
