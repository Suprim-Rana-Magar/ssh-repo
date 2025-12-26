#include<stdio.h>
int main(){
    int a,b,c;
    float d,e,f;
    a=7;
    b=8;
    c=9;
    d=12.5;e=6.25;f=3.5;
    printf("a/b=%d \t a/c=%d",a/b,a/c);
    printf("\nd/e=%f \t d/f=%f \t d/a=%f",d/e,d/f,d/a);
    printf("\n unary minus: -a=%d",-a);
    return 0;
}
