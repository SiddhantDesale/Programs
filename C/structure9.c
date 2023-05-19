#include<stdio.h>

struct Hello
{
    int no;
    float no1;
    struct Demo
    {
        int i;
        float f;
    }dobj1,dobj2;
}hobj;

int main()
{
    hobj.no = 11;
    hobj.no1 = 90.90f;

    hobj.dobj1.i = 21;
    hobj.dobj1.f = 97.99f;

    hobj.dobj2.i = 51;
    hobj.dobj2.f = 99.99f;

    printf("%d\n",hobj.no);
    printf("%f\n\n",hobj.no1);
    printf("%d\n",hobj.dobj1.i);
    printf("%f\n\n",hobj.dobj1.f);
    printf("%d\n",hobj.dobj2.i);
    printf("%f\n",hobj.dobj2.f);


}