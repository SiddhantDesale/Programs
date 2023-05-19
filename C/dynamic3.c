#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;

    //step1 : allocate the memory
    ptr = (int *)malloc(sizeof(int) * 5);    //20 bytes

    //step2 : use the memory(in logic building batch)


    ptr = (int *)realloc(ptr, sizeof(int)* 7);     //28 bytes

    ptr = (int *)realloc(NULL, sizeof(int)* 0);     //12 bytes
 

    //step3 : deallocate the memory
    free(ptr);


    return 0;
}