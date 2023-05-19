#include<iostream>
//using namespace std;        //namepsace concept(inbuilt namespace)


namespace Marvellous
{
class Demo
{
    public:
    int A;
    int B;
    //parametrized constructor with default arguments
    Demo(int i = 10,int j = 20)
    {
        A = i;
        B = j;
    }
};
}

namespace Infosystems
{
    class Demo
    {
        public:
        int A;
    };
}

using namespace Marvellous;       //namespace concept (user defined)

int main()
{
   Marvellous::Demo obj1;

   Infosystems::Demo obj2;

    std::cout<<"Inside main"<<"\n";      //namespace std use this in interview(line 28 and line 2 are related)

    return 0;
}