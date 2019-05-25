#include<stdio.h>
#include<math.h>
int main()
{
    int amount;
    float remaining_amount;

    float interest_rate;
    float monthly_emi;
    float current_month_interest;
    float current_month_principal;
    float total_interest_paid = 0.0;

   // printf("Input the Amount, Interest Rate, Monthly EMI\t ' in the same order ' : ");
    printf("Please Specify Following Details:-\n");

    printf("%25s", "Loan Amount: ");
    scanf("%d", &amount);

    printf("%25s", "Yearly Interest Rate: ");
    scanf("%f", &interest_rate);

    printf("%25s", "Monthly EMI: ");
    scanf("%f", &monthly_emi);

    remaining_amount = amount;

    int month = 1;

    printf("\nThis is Your month by month interest report\n");
    printf("\n*******************************************\n");

    printf("%10s%25s%25s%25s\n",
           "Month" , "Principal Outstanding", "Current Month Interest", "Total Interest Paid");

    do
    {
        current_month_interest = (remaining_amount * interest_rate) / 12 / 100;

        current_month_principal = monthly_emi - current_month_interest;

        remaining_amount = remaining_amount - current_month_principal;

        total_interest_paid = total_interest_paid + current_month_interest;

        printf("%10d%25.1f%25.1f%25.1f\n",
                month, remaining_amount, current_month_interest, total_interest_paid);
        month++;

    } while( remaining_amount > monthly_emi);
    return 0;
}
