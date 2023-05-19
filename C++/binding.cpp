#include<iostream>
using namespace std;

class Demo
{
    public:
    
    void fun()
    {
        cout<<"Inside fun"<<"\n";
    }

    void gun()
    {
        cout<<"Inside gun"<<"\n";
    }
};

int main()
{
    Demo obj;

    cout<<sizeof(obj)<<"\n";  //if there is no characteristic in the class then the memory given is 1 bytes

    obj.fun();
    obj.gun();

    return 0;
}