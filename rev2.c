#include<stdio.h>
#include<math.h>
int main() {
    int rev=0,i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n>=1000&&n<=9999) {
      rev=0;
     for (n>0) {
       i=n%10;
       rev=rev*10+i;
       n=n/10;
     }
     printf("\nThe reverse number=%d",rev);
    }
    else {
        printf("Invalid number:");
    }
    return 0;
}