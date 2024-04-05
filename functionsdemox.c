#include<stdio.h>

int Multiplication(int No1, int No2)
{
    int Ans=0;
    Ans = No1 * No2;

    return Ans;
}

int main()
{
    //local variables
    int value1=0, value2=0, ret=0;

    printf("Enter first number:\n");
    scanf("%d",&value1);

    printf("Enter second number:\n");
    scanf("%d",&value2);

    ret= Multiplication(value1,value2);

    printf("Multiplication is: %d\n",ret);

    return 0;
}