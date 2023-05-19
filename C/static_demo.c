#include <stdio.h>

int Demo()
{
static int Age = 10;
Age++;
 printf("%d\n",Age);

 return Age;

}
int main()
{

Demo();
Demo();
Demo();
Demo();

    return 0;
}