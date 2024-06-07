#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two numbers :");
	scanf("%d %d", &a, &b);
	if(a>b){
		printf("The greatest of the two is %d", a);
	}else{
		printf("The greatest of the two is %d", b);
	}
	return 0;
}
