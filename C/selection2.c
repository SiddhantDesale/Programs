#include<stdio.h>

int main()
{
int  Std = 0;
printf("Enter your standard - ");
scanf("%d",&Std);

switch(Std)
{
    case 1:
    printf("Your exam is at 1 PM");
    break;

    case 2:
    printf("Your exam is at 2 PM");
    break;

    case 3:
    printf("Your exam is at 3 PM");
    break;

    case 4:
    printf("Your exam is at 4 PM");
    break;

    default :
    printf("Invalid Standard");

}

return 0;
}
