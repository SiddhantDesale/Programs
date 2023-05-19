#include<iostream>
using namespace std;

class Demo
{
    public:

    Addition(char No1,char No2,char No3) //Addition@3iii(Demo *this,int No1,int No2,int No3);
    {
        cout<<"Addition of 3 integers"<<"\n";
        return No1 + No2 + No3;
    }
};

int main()
{
    Demo obj;

    int fRet = obj.Addition(10,11,51);     //Addition@3iii(Demo *this,int No1,int No2,int No3);
    cout<<"Addition of 3 integers is :"<<fRet<<"\n";

    return 0;
}