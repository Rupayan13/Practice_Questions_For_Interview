#include<stdio.h>
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d", &n);
	int num=n;
	int count=0;
	while(n>0){
		count++;
		n/=10;
	}
	printf("The number of digits in %d is %d.",num, count);
	return 0;
}
