#include<stdio.h>
int main(){
	int a, b;
	printf("Enter lower limit :");
	scanf("%d", &a);
	printf("Enter upper limit :");
	scanf("%d", &b);
	int sum=0, i;
	for(i=a;i<=b;i++){
		sum+=i;
	}
	printf("The sum of the range %d and %d is %d", a, b, sum);
	return 0;
}
