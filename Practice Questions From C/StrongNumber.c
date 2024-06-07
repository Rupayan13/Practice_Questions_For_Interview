#include<stdio.h>
int factorial(int);
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d", &n);
	int sum=0, i, num=n;
	while(n>0){
		sum+=factorial(n%10);
		n/=10;
	}
	if(num==sum){
		printf("The number is a strong number.");
	}else{
		printf("The number is not a strong number.");
	}
	return 0;
}
int factorial(int n){
	int f=1, i;
	for(i=1;i<=n;i++){
		f*=i;
	}
	return f;
}
