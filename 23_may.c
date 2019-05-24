#include<stdio.h>
void main()
{
    int num1, num2;

    char ch;
    char ch2;

    do{

        printf("\nprogram for calculator");
        printf("\nInput the two numbers: ");
        scanf("%d %d", &num1, &num2);

        printf("\ninput the character for calc. :");
        printf("\n + for addition \n - for subtraction \n /for division \n * for multiplication\n");

        fflush(stdin);
        scanf("%c", &ch);

        switch(ch)
        {
            case '+': printf("%d",num1 + num2);
                    break;
            case '-': printf("%d",num1 - num2);
                    break;
            case '/': printf("%d",num1 / num2);
                    break;
            case '%': printf("%d",num1 % num2);
                    break;
            default: printf("Invalid Choice");
                    break;
        }
        printf("\npress n to exit: ");
        fflush(stdin);
        scanf("%c", &ch2);
    }while(ch2!='n');

}





























