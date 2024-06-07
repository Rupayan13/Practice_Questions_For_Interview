#include<stdio.h>
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d", &n);
	int num=n, rev=0;
	while(n>0){
		rev=(rev*10)+(n%10);
		n/=10;
	}
	if(num==rev){
		printf("The number is a palindrome number.");
	}else{
		printf("The number is not a palindrome number.");
	}
	return 0;
}
