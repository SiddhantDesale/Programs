#include<iostream>
using namespace std;

class Demo
{
  public:

  int no1;
  int no2;

  Demo()    //default constructor
  {
    cout<<"Inside default constructor\n";
    no1 = 0;
    no2 = 0;
  }
  Demo(int A, int B)    //parametrised constructor
  {
    cout<<"Inside parametrised constructor\n";
    no1 = A;
    no2 = B;  
  }

  Demo(Demo &ref)   //copy constructor
  {
    cout<<"Inside copy constructor\n";
    no1 = ref.no1;
    no2 = ref.no2;
  }

  ~Demo()
  {
    cout<<"Inside Destructor\n";
  }

  void fun()
  {
    cout<<"Inside fun\n";
  }
  void gun()
  {
    cout<<"Inside gun\n";
  } 

};

int main()
{
  cout<<"Inside main\n";

  Demo fun();

  Demo obj1;

  cout<<"value of no1 from obj1 is : "<<obj1.no1<<"\n";
  cout<<"value of no2 from obj1 is : "<<obj1.no2<<"\n";

  Demo obj2(11,21);
  cout<<"value of no1 from obj2 is : "<<obj2.no1<<"\n";
  cout<<"value of no2 from obj2 is : "<<obj2.no2<<"\n";

  Demo obj3(obj2);
  cout<<"value of no1 from obj3 is : "<<obj3.no1<<"\n";
  cout<<"value of no1 from obj3 is : "<<obj3.no2<<"\n";

  Demo fun();

  Demo gun();


  return 0;
}