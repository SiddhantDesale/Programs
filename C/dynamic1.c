#include<stdio.h>
#include<stdlib.h>

int main()
{
  //  int arr[5];           //static memory allocation

    int size = 0;
    int *ptr = NULL;
    printf("value of size : %d\n",size);
    printf("Value of ptr : %d\n",ptr);

    printf("Enter the size of array\n");
    scanf("%d",&size);

    //step1 : allocate the memory
    ptr = (void *)malloc(sizeof(int) * size);        //dynamic memory allocation
    printf("value of size : %d\n",size);
    printf("Value of ptr : %d\n",ptr);

    //step2 : use the memory(in logic building batch)

    //step3 : deallocate the memory
    free(ptr);


    return 0;
}