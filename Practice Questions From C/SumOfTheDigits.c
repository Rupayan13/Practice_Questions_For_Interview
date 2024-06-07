#include<stdio.h>
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d", &n);
	int num=n;
	int sum=0;
	while(n>0){
		sum+=(n%10);
		n/=10;
	}
	printf("The number of digits in %d is %d.",num, sum);
	return 0;
}
