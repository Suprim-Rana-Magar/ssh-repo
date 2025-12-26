#include<stdio.h>
int main()
{
    int a,b,x,y;
    x=a++;
    printf("\n x=%d  a=%d",x,a);
    x=++a;
    printf("\n x=%d  a=%d",x,a);
    y=--b;
    printf("\n y=%d  b=%d",y,b);
    y=b--;
    printf("\n y=%d  b=%d",y,b);
    return 0;
}
