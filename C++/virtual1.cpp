#include<iostream>
using namespace std;

class Base
{
    public:
    int A,B;
    void fun()     //1000
    {
        cout<<"Inside fun of Base"<<"\n";
    }
    void gun()    //2000
    {
        cout<<"Inside gun of Base"<<"\n";
    }    
    void sun()    //3000
    {
        cout<<"Inside sun of Base"<<"\n";
    }
};

class Derived:public Base
{
    public:
    int X,Y;
    void fun()     //4000
    {
        cout<<"Inside fun of Derived"<<"\n";
    }
    void gun()    //5000
    {
        cout<<"Inside gun of Derived"<<"\n";
    }    
    void sun()    //6000
    {
        cout<<"Inside sun of Derived"<<"\n";
    }
};

int main()
{

    cout<<"size of Base :"<<sizeof(Base)<<"\n";              //8
    cout<<"size of Derived :"<<sizeof(Derived)<<"\n";        //16

    Base *bp = new Base;           //no casting
    //Derived *dp = new Derived      //no casting

    Base *bp1 = new Derived;          //up casting(allowed)
   // Derived *dp1 = new Base;        //down casting(not allowed)

    return 0;
}