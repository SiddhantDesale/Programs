#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

struct Hello
{
    int no;
    float no1;
    struct Demo dobj;
};

int main()
{
    struct Hello hobj;
    hobj.dobj.i = 11;
    hobj.dobj.f = 90.90f;
    hobj.no = 21;
    hobj.no1 = 99.99f;

    printf("%d\n",hobj.dobj.i);
    printf("%f\n",hobj.dobj.f);
    printf("%d\n",hobj.no);
    printf("%f\n",hobj.no1);

    return 0;
}