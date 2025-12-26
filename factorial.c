#include<stdio.h>
int main () {
    int num,i;
    long fact=1;
    printf("\nEnter a number whose factorial you want to find:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n The factorial is:%d",fact);
    return 0;
}