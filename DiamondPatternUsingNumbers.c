#include<stdio.h>
int main(){
	int n, i, j;
	printf("Enter the number of rows :");
	scanf("%d", &n);
	int p=1;
	for(i=1;i<=n/2;i++){
		for(j=1;j<=n/2-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("%d", p++);
		}
		printf("\n");
	}
	for(i=n/2;i>=1;i--){
		for(j=n/2-i;j>=1;j--){
			printf(" ");
		}
		for(j=2*i-1;j>=1;j--){
			printf("%d", p--);
		}
		printf("\n");
	}
	return 0;
}
