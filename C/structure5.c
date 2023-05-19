#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

int main()
{
    struct Demo arr[4];

    arr[0].i = 11;
    arr[0].f = 90.00f;

    arr[1].i = 21;
    arr[1].f = 95.00f;

    arr[2].i = 31;
    arr[2].f = 97.00f;

    arr[3].i = 41;
    arr[3].f = 99.00f;

    printf("%d\n",arr[0].i);
    printf("%f\n",arr[0].f);

    printf("%d\n",arr[1].i);
    printf("%f\n",arr[1].f);

    printf("%d\n",arr[2].i);
    printf("%f\n",arr[2].f);

    printf("%d\n",arr[3].i);
    printf("%f\n",arr[3].f);

}