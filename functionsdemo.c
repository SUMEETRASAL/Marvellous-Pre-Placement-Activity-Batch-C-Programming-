#include<stdio.h>



int main()
{
    int value1=0, value2=0, ret=0;

    printf("Enter first number:\n");
    scanf("%d",&value1);

    printf("Enter second number:\n");
    scanf("%d",&value2);

    ret= value1 * value2;

    printf("Multiplication is: %d\n",ret);

    return 0;
}