#include<stdio.h>

#pragma pack(1)
struct student
{   
    int Rollno;
    char division;
    int age;
    float marks;
    int salary;
};

int main()
{
    struct student amit;

    printf("Size of object is: %d \n",sizeof(amit));


    return 0;
}