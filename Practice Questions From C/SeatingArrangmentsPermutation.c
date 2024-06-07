#include<stdio.h>
int fact(int n){
	int f=1, i;
	for(i=1;i<=n;i++){
		f*=i;
	}
	return f;
}
int main(){
	int n, r;
	printf("Enter the number of people :");
	scanf("%d", &n);
	printf("Enter the number of seats :");
	scanf("%d", &r);
	int res=fact(n)/fact(n-r);
	printf("The arrangements can have %d.", res);
	return 0;
}
