#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    int *p = &(Arr[1]);
    int *q = &(Arr[3]);

    printf("Value of Arr[0] : %d\n",Arr[0]);
    printf("Value of Arr[1] : %d\n",Arr[1]);
    printf("Value of Arr[2] : %d\n",Arr[2]);
    printf("Value of Arr[3] : %d\n",Arr[3]);
    printf("Value of Arr[4] : %d\n",Arr[4]);

    printf("Value of *p : %d\n",*p);
    printf("Value of *p : %d\n",*p);
    printf("Value of *q : %d\n",*q);
    printf("Value of *q : %d\n",*q);
  
    printf("Value of &Arr[0] : %d\n",&Arr[0]);
    printf("Value of &Arr[1] : %d\n",&Arr[1]);
    printf("Value of &Arr[2] : %d\n",&Arr[2]);
    printf("Value of &Arr[3] : %d\n",&Arr[3]);
    printf("Value of &Arr[4] : %d\n",&Arr[4]);

    printf("Value of p : %d\n",p);
    printf("Value of p : %d\n",p);
    printf("Value of q : %d\n",q);
    printf("Value of q : %d\n",q);



 
}