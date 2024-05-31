#include<stdio.h>
#include<math.h>
int count(int);
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d", &n);
	int p=count(n);
	int sum=0, i, num=n;
	while(n>0){
		sum+=pow(n%10, p);
		n/=10;
	}
	if(num==sum){
		printf("The number is a armstrong number.");
	}else{
		printf("The number is not a armstrong number.");
	}
	return 0;
}
int count(int n){
	int c=0;
	while(n>0){
		c++;
		n/=10;
	}
	return c;
}
