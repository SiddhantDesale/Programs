#include<iostream>
using namespace std;

const int A = 10;

int main()
{
    const int B = 20;
    const int Arr[4] = {10,20,30,40};

    //const int no;
    //No = 11;

    const int No = 11;

    cout<<A<<"\n";
    cout<<B<<"\n";
    cout<<No<<"\n";
    cout<<Arr[0]<<"\n";
    cout<<Arr[1]<<"\n";
    cout<<Arr[2]<<"\n";
    cout<<Arr[3]<<"\n";

    /*
    A = 11;
    A++;
    A--;
    B = 21;
    B++;
    B--;
    Arr[1] = 21;
    Arr[2]++;
    */

   return 0;
}