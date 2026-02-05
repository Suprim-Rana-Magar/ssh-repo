#include<stdio.h>
#include<stdlib.h>
void minmax(int* ,int);
int main(){
    int n,i;
    int *num;
    printf("Enter no of elements in your array:");
    scanf("%d ", &n);
    num=(int *)calloc(n, sizeof(int));
    printf("\n Enter %d intrgers:",n);
    for(i=0; i<n; i++)
    scanf("%d",num+1);
    minmax(num,n);
    return 0;
}
void minmax(int *no, int n){
    int i;
    int min, max;
    max=*no;
    min=*no;
    for(i=0; i<n; i++){
        if(max<*(no+1))
        max=*(no+1);
        if(min>*(no+1))
        min=*(no+1);
    }
    printf("\n The maximum number is :%d", max);
    printf("\n The minimum number is:%d",min);
}