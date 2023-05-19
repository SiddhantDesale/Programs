#include<stdio.h>

int Addition (int No1,int No2)
{
    int Ans = 0;

    Ans = No1 + No2;

    return Ans;
}
int main()
{
    int A = 10;
    int B = 20;
    int Ret = 0;

    int *ptr(int A,int B);
    ptr = Addition;
    
    Ret = ptr(A,B);
     printf("%d\n",Ret);
    return 0;

}