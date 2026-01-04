#include<stdio.h>
#define ROW 4
#define COL 4
int main() {
    int a[ROW][COL],i,j;
    printf("Enter elements of a 4x4 matrix:\n");
    for(i=0;i<ROW;i++) 
     {
        for(j=0;j<COL;j++) 
        scanf("%d",&a[i][j]);
        printf("\n");
     }
     printf("Original matrix:\n");
        for(i=0;i<ROW;i++) 
        {
            for(j=0;j<COL;j++) 
            printf("%d\t",a[i][j]);
            printf("\n");
        }
        for(j=1;j<COL;j++)
                     for(i=0;i<j;i++)
                         a[i][j]=0;
        printf("lower Triangular Matrix:\n");
        for(i=0;i<ROW;i++) 
        {
            for(j=0;j<COL;j++) 
            printf("%d\t",a[i][j]);
            printf("\n");
        }
        return 0;
}