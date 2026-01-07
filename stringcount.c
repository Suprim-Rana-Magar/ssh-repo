#include<stdio.h>
#include<string.h>
int main() {
    char x[30];
    int length, i, vowel=0, consonant=0;
    printf("\nEnter a string: ");
    scanf("%s", x);
    length = strlen(x);
    printf("\nLength of the string is: %d", length);
    for (i=0; i<length; i++) {
        if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u') {
            vowel++;
        } else {
            consonant++;
        }
    }
    printf("\nTotal number of vowels: %d", vowel);
    printf("\nTotal number of consonants: %d\n", consonant);
    return 0;
}