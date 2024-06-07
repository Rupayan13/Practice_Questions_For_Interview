#include<stdio.h>
int main(){
	int n, p;
	printf("Enter the number :");
	scanf("%d", &n);
	printf("Enter the power :");
	scanf("%d", &p);
	int res=1, i;
	for(i=1;i<=p;i++){
		res*=n;
	}
	printf("The %d^%d is %d", n, p, res);
	return 0;
}
