#include<stdio.h>
#pragma pack(2)

struct Demo
{
    int i;
    int j;
    float f;
    char ch;
};

int main()
{
    struct Demo obj;

    printf("%d\n",sizeof(obj));

    return 0;
}