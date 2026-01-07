#include<stdio.h>
#include<string.h>
int main() {
    char name[5][50];
    int i;
    for(i=1;i<=5;i++) {
        printf("Enter name of the student no. %d: \n",i);
        scanf("%s\n",name[i]);
    }
    printf("Students name are:\n");
    for(i=1;i<=5;i++) {
        printf("%d. %s\t",name[i]);
    }
    return 0;
}