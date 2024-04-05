# include<stdio.h>

int main()
{
    int No1=0;
    int Ans=0;

    printf("Enter a number:\n");
    scanf("%d",&No1);

    Ans= No1 % 2;

    if(Ans == 0) //jar Ans madhe 0 asel tr
    {
        printf("Number is even\n");
    }
    else //nahitr 
    {
        printf("Number is odd");
    }

    return 0;
}