#include<stdio.h>

struct Hello
{
    int no;
    float no1;
    struct Demo
    {
        int i;
        float f;
    }dobj;
}hobj;

int main()
{
    hobj.no = 11;
    hobj.no1 = 90.90f;
    hobj.dobj.i = 21;
    hobj.dobj.f = 99.99f;

    printf("%d\n",hobj.no);
    printf("%f\n",hobj.no1);
    printf("%d\n",hobj.dobj.i);
    printf("%f\n",hobj.dobj.f);

}