#include<stdio.h>

int main()
{
    int i = 11;
    int *iptr = &i;

    char ch = 'A';
    char *cptr = &ch;

    double d = 98.9999;
    double *dptr = &d;

    printf("Value of i : %d\n",i);
    printf("Value of ch : %c\n",ch);
    printf("Value of d : %f\n\n",d);

    printf("Value of Address i : %d\n",&i);
    printf("Value of Address ch : %d\n",&ch);
    printf("Value of Address d : %d\n\n",&d);

    printf("Value of Address iptr : %d\n",&iptr);
    printf("Value of Address cptr : %d\n",&cptr);
    printf("Value of Address dptr : %d\n\n",&dptr);

    printf("Value of Pointer iptr : %d\n",*iptr);
    printf("Value of Pointer cptr : %c\n",*cptr);
    printf("Value of Pointer dptr : %f\n\n",*dptr);

    printf("Value of sizeof pointer iptr : %d\n",sizeof(iptr));
    printf("Value of sizeof pointer cptr : %d\n",sizeof(cptr));
    printf("Value of sizeof pointer dptr : %d\n\n",sizeof(dptr));

    printf("Value of sizeof *iptr : %d\n",sizeof(*iptr));
    printf("Value of sizeof *cptr : %d\n",sizeof(*cptr));
    printf("Value of sizeof *dptr : %d\n",sizeof(*dptr));

    return 0;
}