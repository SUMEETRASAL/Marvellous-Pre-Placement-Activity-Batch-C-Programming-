#include<stdio.h>

void Marvellous()
{
    static int x=10;
    x++;
    printf("value of x is : %d\n",x);
}

int main()
{
    printf("Demostration of static storage class..\n");

    Marvellous();
    Marvellous();
    Marvellous();

    return 0;
}