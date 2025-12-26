#include<stdio.h>
int main () {
    int day , month , year ;
    printf("enter your date of birth in sequence\n");
    printf("day,month and then year seperatedby / character:\n");
    scanf("%d/%d/%d", &day , &month , &year);
    printf("your date of birth is: %d day %d month %d year",day, month, year);
    return 0;
}