#include<stdio.h>
#include<math.h>
void main()
{
    int amount, interest_rate;
    float monthly_emi;
    float EMI;
    char ch;
    do
    {
        printf("Input the Amount, Interest Rate, Monthly EMI\t ' in the same order ' : ");
        fflush(stdin);
        scanf("%d %d %d\n", &amount, &interest_rate, &monthly_emi);

        EMI = (amount * interest_rate * pow((1+interest_rate),monthly_emi))/pow((1+interest_rate),monthly_emi-1);

        printf("The EMI for the given values is:  ",EMI);

        printf("if you want to exit please press n");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch!='n');

}
