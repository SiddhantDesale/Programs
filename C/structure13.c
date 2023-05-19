#include<stdio.h>

struct Demo
{
    int i;
    char ch1;
    char ch2;
    float f;
    int j;
}dobj1;

struct Hello
{
    int i;
    char ch1;
    float f;
    char ch2;
    int j;
}dobj2;

int main()
{
    struct Demo dobj1;
    struct Hello dobj2;
   
    printf("%d\n",sizeof(dobj1));
    printf("%d\n",sizeof(dobj2));

    return 0;
}