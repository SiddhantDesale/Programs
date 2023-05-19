#include<stdio.h>

struct Demo
{
    int i;
    struct Demo *ptr;
};

int main()
{
    struct Demo obj;

    obj.i = 11;
    obj.ptr = NULL;

    printf("%d\n",obj.i);
    printf("SID - %c\n",obj.ptr);

    return 0;
}