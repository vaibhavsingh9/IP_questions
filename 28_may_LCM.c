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

int calculate_LCM(int n1, int n2)
{
    int i;
    for( i = n1 < n2 ? n1 : n2; i >= 1; i--)
    {
        if( n1 % i == 0 && n2 % i == 0 )
            break;
    }
    printf("HCF = %d \n LCM = %d\n", i, n1*n2/i);
}

int main()
{
    int factorsList[200];
    int factorcount, i;
    int expectedFactors[200];
    int expectedFactorCount = 0;


    int number, num1, num2;
    //printf("\nInput two numbers for LCM and HCF : ");
    //scanf("%d %d", &num1, &num2);

    calculate_LCM(1, 23);
    calculate_LCM(1728 , 1324);
    calculate_LCM(2468 , 9046);
    calculate_LCM(7833 , 8939);
    calculate_LCM(1,1);
    calculate_LCM(-234 , -980);
    calculate_LCM(-7492 , 21);

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

