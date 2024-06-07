#include<stdio.h>
int main(){
	char ch;
    printf("Enter the character :");
    scanf("%c", &ch);
    if((ch>=65 && ch<=90)||(ch>=97 && ch<=122)){
        printf("The character is alphabet.");
    }else{
    	printf("The character is not a alphabet.");
	}
	return 0;
}
