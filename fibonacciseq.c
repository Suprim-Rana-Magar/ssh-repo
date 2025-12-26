#include <stdio.h>

int main(){
    int a=0,b=1,c,i=1, n;
    printf("Enter the number of terms for fibonacci sequence: \t");
    scanf("%d",&n);
    do{
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    while(i<=n);
    return 0;
}