#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of terms :");
	scanf("%d", &n);
	int i, sum=-0;
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("The sum of %d natural number is %d", n, sum);
	return 0;
}
