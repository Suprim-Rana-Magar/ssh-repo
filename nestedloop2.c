#include<stdio.h>
int main() {
    int i,j,k;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=i;j++)
        {
            k=(i+j)+1;
            printf("%d\n",k);
        }



        printf("\n");
    }
    return 0;
}