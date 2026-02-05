#include<stdio.h>
#include<string.h>
int main(){
    char *namaste ="Namaskar Sir";
    char name[40];
    printf("Enter your name");
    gets(name);
    puts(namaste);
    printf("\n Namaskar %s Sir",name);
    return 0;
}