#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character :");
    scanf("%c", &ch);
    if(ch>=65 && ch<=90){
        ch=ch+32;
    }
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("The character is a vowel.");
    }else{
        printf("The character is a consonent.");
    }
    return 0;
}