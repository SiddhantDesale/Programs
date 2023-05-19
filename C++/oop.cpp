//class = characteristics + behaviours
//class = data(variables) + functions

#include<iostream>

using namespace std;

class Demo       //struct replaced by class
{
    public:
    int no1;
    int no2;

    void fun()
    {
        cout<<"Inside fun\n";  
    }


};

int main()
{
  Demo obj1;
  Demo obj2;

  cout<<"size of object : "<<sizeof (obj1)<<"\n";   //8

obj1.no1 = 10;
obj1.no2 = 20;

obj2.no1 = 30;
obj2.no2 = 40;

obj1.fun();     //Inside fun
obj1.fun();     //Inside fun

cout<<obj1.no2<<"\n";    //20
    return 0;
}