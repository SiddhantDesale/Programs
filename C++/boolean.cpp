#include<iostream>
using namespace std;

bool CheckEven(int no)
{
  if((no % 2) == 0)
  {
    return true;
  }
  else
  {
    return false;
  }

}

int main()
{
    int Value = 0;
    bool bRet;
    cout<<"Enter number : \n";
    cin>>Value;

    bRet = CheckEven(Value);

    if(bRet == true)
    {
        cout<<"It is even number\n";
    }
    else
    {
        cout<<"It is odd nhmber\n";
    }
    
    return 0;
}