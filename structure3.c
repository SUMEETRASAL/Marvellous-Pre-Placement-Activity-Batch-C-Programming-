#include<stdio.h>

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
    struct student pooja;

    printf("Size of object is: %d \n",sizeof(amit));

    amit.Rollno=11;
    amit.division='A';
    amit.marks=90.89;
    amit.age=19;
    amit.salary=21000;

    pooja.Rollno=21;
    pooja.division='D';
    pooja.marks=93.67;
    pooja.age=17;
    pooja.salary=5000;

    printf("Age of Amit is: %d \n",amit.age);
    printf("Age of Pooja : %d \n",pooja.age);

    printf("Salary of Amit : %d \n",amit.salary);
    printf("Salary of Pooja : %d \n",pooja.salary);

    return 0;
}