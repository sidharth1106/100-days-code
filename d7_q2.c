#include<stdio.h>

int main(){
    char ch;
    printf("enter your alpahbet : ");
    scanf(" %c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        char low = (ch>='A' && ch<='Z')?ch+32:ch;
        if((low=='a')||(low=='e')||(low=='i')||(low=='o')||(low=='u')){
            printf(" %c is a vowel",ch);
        }
        else{printf(" %c is consonant",ch);
        }
    }
    else("enter a valid value");

    return 0;
}