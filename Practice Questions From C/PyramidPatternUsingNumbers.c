#include<stdio.h>
int main(){
	int r, i, j;
	printf("Enter the number of rows :");
	scanf("%d", &r);
	int p=1;
	for(i=1;i<=r;i++){
		for(j=1;j<=r-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("%d", p++);
		}
		printf("\n");
	}
	return 0;
}
