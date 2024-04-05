#include<stdio.h>
#include<stdlib.h> //for malloc,calloc, realloc and free

int main()
{
    int Arr[5]; //static memory allocation
    int Size=0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&Size);  //if size is 6

    ptr= (int *) calloc(Size , sizeof(int));
    //ptr= (int *) calloc(12 , 500ml);
    //ptr= (int *) malloc(6000ml));
    //Use the memory

    free(ptr);

    return 0;
}
