#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[5];           //static memory allocation

    int size = 0;
    int *ptr = NULL;

    printf("Enter the size of array\n");
    scanf("%d",&size);

    //step1 : allocate the memory
    ptr = (int *)calloc(sizeof(char), size);

    //step2 : use the memory(in logic building batch)

    //step3 : deallocate the memory
    free(ptr);


    return 0;
}