#include<stdio.h>
int main(){
    int num1,num2,large;
    printf("Enter two numbers:\n");
    scanf("%d %d",&num1,&num2);
    large = ( num1 > num2 ) ? num1 : num2;
    printf("Larger number between %d & %d is %d.", num1, num2, large); 
    return 0;   
}