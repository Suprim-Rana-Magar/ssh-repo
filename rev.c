#include <stdio.h>

int main(){
    int n;
    int digit, rev=0;
    printf("Enter the Number: ");
    scanf("%d",&n);

    while(n>0){
        digit = n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    return 0;
}