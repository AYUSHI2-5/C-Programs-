#include<stdio.h>
main()
{
    int a=200;
    int *b;
    b=&a;
    printf("\na=%d *b=%d",a,*b);
    *b=7;
    printf("\na=%d *b=%d",a,*b);
    a=20;
    printf("\na=%d *b=%d",a,*b);

}