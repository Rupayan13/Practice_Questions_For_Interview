#include<stdio.h>
int main(){
	int a, b;
	printf("Enter the first number :");
	scanf("%d", &a);
	printf("Enter the second number :");
	scanf("%d", &b);
	int small, big;
	if(a>b){
		big=a;
		small=b;
	}else{
		big=b;
		small=a;
	}
	int rem;
	while(small!=0){
		rem=big%small;
		big=small;
		small=rem;
	}
	printf("The gcd of two numbers is %d", big);
	
	return 0;
}
