#include<stdio.h>

int main()
{
    char a = 'A';
    printf("%d\n\n",sizeof a);  //1

    int i = 11;
    short int j = 41;
    long int k = 51;
    printf("%d\n",sizeof i);   //4
    printf("%d\n",sizeof j);   //2
    printf("%d\n\n",sizeof k);  //4

    float f = 99.99f;
    printf("%d\n\n",sizeof f);   //4

    double d = 98.9999;
    long double ld = 65.666666;
    printf("%d\n",sizeof d);     //8
    printf("%d\n",sizeof ld);    //12

    return 0;
}