#include<stdio.h>
int sumOfDivisors(int);
int main(){
	int a, b;
	printf("Enter the first element :");
	scanf("%d", &a);
	printf("Enter the second element :");
	scanf("%d", &b);
	if((sumOfDivisors(a)/a)==(sumOfDivisors(b)/b)){
		printf("%d and %d is a friendly pair.", a, b);
	}else{
		printf("%d and %d is not a friendly pair.", a, b);
	}
	return 0;
}
int sumOfDivisors(int n){
	int sum, i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return sum;
}
