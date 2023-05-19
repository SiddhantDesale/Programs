#include<stdio.h>

int main()
{
    int i = 11;
    int *p = NULL;

    p = &i;

    printf("%d\n",*p);

    return 0;

}