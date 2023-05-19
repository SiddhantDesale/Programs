#include<stdio.h>

int main()
{
    int i = 11;
    printf("Value of i : %d\n",i);
    printf("Value of &i : %d\n",&i);

    int *p = &i;
    printf("Value of *p : %d\n",*p);
    printf("Value of &p : %d\n",&p);
    printf("Value of p : %d\n",p);

    int *q = &i;
    printf("Value of *q : %d\n",*q);
    printf("Value of &q : %d\n",&q);
    printf("Value of q : %d\n",q);

    return 0;
}