#include<iostream>
using namespace std;

class Base
{
    public:
    int A,B;
    virtual void fun()     //1000
    {
        cout<<"Inside fun of Base"<<"\n";
    }
    virtual void gun()    //2000
    {
        cout<<"Inside gun of Base"<<"\n";
    }    
    virtual void sun()    //3000
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
    virtual void sun()    //5000
    {
        cout<<"Inside sun of Derived"<<"\n";
    }    
    virtual void run()    //6000
    {
        cout<<"Inside run of Derived"<<"\n";
    }
};

int main()
{
   // cout<<"size of obj :"<<sizeof(Base)<<"\n";

    //Derived dobj;
   // cout<<"size of obj :"<<sizeof(dobj);

  //  cout<<"size of Base :"<<sizeof(Base)<<"\n";              //12     4 bytes stored for vptr
    //cout<<"size of Derived :"<<sizeof(Derived)<<"\n";        //20     4 bytes stored for vptr

    Base *bp = new Derived;         //up casting (allowed)
    bp->fun();                     //derived fun
   // bp->gun();                     //base gun
   // bp->sun();                     //derived sun
    //bp->run();                     //error
   
    return 0;
}