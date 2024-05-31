#include<stdio.h>
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d", &n);
	if(n>0){
		printf("The number is positive.");
	}else if(n<0){
		printf("The number is negetive.");
	}else{
		printf("The number is zero.");
	}
	return 0;
}
