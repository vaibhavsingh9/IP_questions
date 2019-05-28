/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int getLowestFacor(int factorof)
{
    for (int i = 2 ; i <= factorof ; i++ )
    {
        if ( (factorof % i ) == 0 )
        {
            return i;
        }

    }
    return 1;
}


int setFactors( int factorOf , int *factorList)
{
    int number = factorOf;
    int factor = 1;
    int factorCount = -1;

    printf("Printing Factors Of: %d\n", factorOf);
    while( number > 1 ) {
        number = number / factor;
        factor = getLowestFacor(number);
        //printf("%d\n", factor);
        factorList[++factorCount] = factor;
    }

    return factorCount;
}

int main()
{
    int factorsList[200];
    int factorcount, i;
    int expectedFactors[200];
    int expectedFactorCount = 0;


    int number ;

    number = 4;
    expectedFactorCount = 2;
    expectedFactors[0] = 2;
    expectedFactors[1] = 2;
    expectedFactors[2] = 1;

    factorcount = setFactors(number , factorsList);
    if ( expectedFactorCount != factorcount )
        printf("FAIL: factors for number %d, expected %d, actual %d\n", number, expectedFactorCount, factorcount );
    else
    {
        // if all factors match

        printf("OK: factors for number %d, expected %d, actual %d\n", number, expectedFactorCount, factorcount );
    }
    //setFactors(56);
    //setFactors(28);
    return 0;
}

