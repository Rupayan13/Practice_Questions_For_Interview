#include<stdio.h>
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d", &n);
	int a=0, b=1, i;
	for(i=1;i<=n;i++){
		int c=a+b;
		printf("%d", a);
		a=b;
		b=c;
	}
	return 0;
}
