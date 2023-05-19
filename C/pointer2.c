#include<stdio.h>

int main()
{
    int i = 11;
    int *p = &i;
    int **q = &p;
    int ***r = &q;
    int ****a = &r;
    int *****b =  &a;
    int ******c = &b;

    printf("Value of sizeof i : %d\n",sizeof(i));           //4
    printf("Value of Address of i : %d\n",&i);              //100
    printf("Value of Address of &a : %d\n",&a);            //500
    printf("Value of sizeof r : %d\n",sizeof(r));           //8
    printf("Value of sizeof c : %d\n",sizeof(c));          //8
    printf("Value of sizeof *p : %d\n",sizeof(*p));        //4
    printf("Value of Address of q : %d\n",&q);             //300
    printf("Value of Address of c : %d\n",&c);             //700
    printf("Value of Pointer *p : %d\n",*p);              //11
    printf("Value of Pointer **q : %d\n",**q);            //11
    printf("Value of Pointer ****b : %d\n",****b);        //100
    printf("Value of Pointer ******c : %d\n",******c);    //11
    printf("Value of Pointer **c : %d\n",**c);            //400
   

    return 0 ;
}