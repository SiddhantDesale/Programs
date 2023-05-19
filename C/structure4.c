#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int arr[4];
};

int main()
{
    struct Demo obj;

    obj.i = 10;
    obj.f = 90.88f;
    obj.arr[0] = 11;
    obj.arr[1] = 21;
    obj.arr[2] = 31;
    obj.arr[3] = 41;


    printf("%d\n",obj.i);
    printf("%f\n",obj.f);
    printf("%d\n",obj.arr[0]);
    printf("%d\n",obj.arr[1]);
    printf("%d\n",obj.arr[2]);
    printf("%d\n",obj.arr[3]);
   
}