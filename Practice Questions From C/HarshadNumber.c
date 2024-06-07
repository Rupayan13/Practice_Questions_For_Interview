#include<stdio.h>
int sumOfTheDigits(int);
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d", &n);
	int s=sumOfTheDigits(n);
	if(n%s==0){
		printf("%d is a harshad number", n);
	}else{
		printf("%d i not a harshad number", n);
	}
	return 0;
}
int sumOfTheDigits(int n){
	int sum=0;
	while(n>0){
		sum+=(n%10);
		n/=10;
	}
	return sum;
}
