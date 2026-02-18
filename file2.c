#include<stdio.h>
void main() {
    FILE *fp;
    char s[100];
    clrscr();
    fp=fopen("C:\\test.txt","r");
    if(fp==NULL) {
        printf("\n Cannot open file");
        exit();
    }
    else {
        printf("\n File is opened");
    }
    fgets(s,19,fp);
    printf("\n Text from file is:%s",s);
    fclose(fp);
    getch();
}