<<<<<<< HEAD
#include <stdio.h>
#define M 2
#define N 4
int main() {
    int matrix [M] [N], matrix2[M][N], sum[M][N], i,j;
    printf("Enter elements of the matrix:\n");
    for(i=0;i<M;i++)
{
    for (j=0;j<N;j++)
    {
        scanf("%d", &matrix[i][j]);
    }
}
printf("\nThe entered matrix is:\n");
for(i=0;i<M;i++)
{
    for (j=0;j<N;j++)
    {
        printf("%d\t", matrix[i][j]);
    }
    printf("\n");
}
printf("\nEnter the elements of second matrix:\t");
for(i=0;i<M;i++)
{
    for(j=0;j<N;j++)
    {
        scanf("%d", &matrix2[i][j]);
    }
}
    printf("\nThe second matrix is:\n");
for(i=0;i<M;i++)
{
    for (j=0;j<N;j++)
    {
        printf("%d\t", matrix2[i][j]);
    }
    printf("\n");
}
for(i=0;i<M;i++)
{
    for(j=0;j<N;j++)
    {
        sum[i][j]=matrix[i][j]+matrix2[i][j];
    }
}
printf("\nThe sum of the two matrices is:\n");
for(i=0;i<M;i++)
{
    for(j=0;j<N;j++)
    {
        printf("%d\t", sum[i][j]);
    }
    printf("\n");
}
return 0;
}




=======
#include <stdio.h>
#define M 2
#define N 4
int main() {
    int matrix [M] [N], matrix2[M][N], sum[M][N], i,j;
    printf("Enter elements of the matrix:\n");
    for(i=0;i<M;i++)
{
    for (j=0;j<N;j++)
    {
        scanf("%d", &matrix[i][j]);
    }
}
printf("\nThe entered matrix is:\n");
for(i=0;i<M;i++)
{
    for (j=0;j<N;j++)
    {
        printf("%d\t", matrix[i][j]);
    }
    printf("\n");
}
printf("\nEnter the elements of second matrix:\t");
for(i=0;i<M;i++)
{
    for(j=0;j<N;j++)
    {
        scanf("%d", &matrix2[i][j]);
    }
}
    printf("\nThe second matrix is:\n");
for(i=0;i<M;i++)
{
    for (j=0;j<N;j++)
    {
        printf("%d\t", matrix2[i][j]);
    }
    printf("\n");
}
for(i=0;i<M;i++)
{
    for(j=0;j<N;j++)
    {
        sum[i][j]=matrix[i][j]+matrix2[i][j];
    }
}
printf("\nThe sum of the two matrices is:\n");
for(i=0;i<M;i++)
{
    for(j=0;j<N;j++)
    {
        printf("%d\t", sum[i][j]);
    }
    printf("\n");
}
return 0;
}




>>>>>>> 89de7f74f1a399599d1b0986dd25afd80645dc61
