#include<stdio.h>
int fact(int n){
	int f=1, i;
	for(i=1;i<=n;i++){
		f*=i;
	}
	return f;
}
int combination(int n, int r){
	int res=fact(n)/(fact(r)*fact(n-r));
	return res;
}
int main(){
	int r, i, j;
	printf("Enter the number of rows :");
	scanf("%d", &r);
	for(i=1;i<=r;i++){
		for(j=1;j<=r-i;j++){
			printf(" ");
		}
		int x=0;
		for(j=1;j<=i;j++){
			int res=combination(i-1, x++);
			printf("%d ", res);
		}
		printf("\n");
	}
	return 0;
}
