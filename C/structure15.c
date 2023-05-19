#include<stdio.h>

union Demo
{
    int i;
    float f;
};

int main()
{
    union Demo obj;

    obj.i = 11;
    printf("%d\n",obj.i);

    obj.f = 99.99f;
    printf("%f\n",obj.f);

    return 0;
}