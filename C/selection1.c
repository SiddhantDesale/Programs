#include<stdio.h>

int main()
{
int A = 0;

printf("Enter a number - ");
scanf("%d",&A);

if ((A % 2 == 0))
{
    printf("\nIts an even number\n");
}
else
{
    printf ("\nIts an odd number\n");
}



    return 0;
}