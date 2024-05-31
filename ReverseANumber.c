#include<stdio.h>
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d", &n);
	int num=n;
	int rev=0;
	while(n>0){
		rev=(rev*10)+(n%10);
		n/=10;
	}
	printf("The reverse of %d is %d.", num, rev);
	return 0;
}
