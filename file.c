#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main() {
    FILE *fp;
    clrscr();
    fp=fopen("C:\\test.txt","w");
    if(fp=NULL) {
        printf("\n Cannot create file");
        exit();
    }
    else {
        printf("\n File is created");
    }
    fputs("I study BCA",fp);
    fclose(fp);
    getch();
}