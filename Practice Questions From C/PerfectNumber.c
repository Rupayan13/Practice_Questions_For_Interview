#include<stdio.h>
int main(){
	int n, i;
	printf("Enter the number :");
	scanf("%d", &n);
	int sum=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(n==sum-n){
		printf("The number is a perfect number.");
	}else{
		printf("The number is not a perfect number.");
	}
	return 0;
}
