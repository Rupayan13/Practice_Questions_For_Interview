#include<stdio.h>
#include<math.h>
int count(int);
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d", &n);
	int p=pow(n, 2);
	if(n==(p%(int)pow(10, count(n)))){
		printf("%d is a automorphic number", n);
	}else{
		printf("%d is not a automorphic number", n);
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
