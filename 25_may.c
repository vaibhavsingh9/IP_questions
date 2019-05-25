#include<stdio.h>
void main()
{
    int i, num;
    printf("input the number: ");
    scanf("%d", &num);

    for( i = 1; i <= num/2; i++)
    {
        if(num % i == 0)
            printf("\n%d",i);
    }
}
