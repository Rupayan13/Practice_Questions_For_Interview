#include<stdio.h>
int countDivisors(int n){
	int count=0, i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	return count;
}
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d", &n);
	if(countDivisors(n)==9){
		printf("%d has exactly 9 divisors.", n);
	}else{
		printf("%d has not exactly 9 divisors.", n);
	}
	return 0;
}
