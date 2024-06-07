#include<stdio.h>
int main(){
	int r, c, i, j;
	printf("Enter the number of rows :");
	scanf("%d", &r);
	printf("Enter the number of columns :");
	scanf("%d", &c);
	for(i=1;i<=r;i++){
		if(i==1 || i==r){
			for(j=1;j<=c;j++){
			printf("*");
		    }
		}else{
			printf("*");
			for(j=1;j<=c-2;j++){
			printf(" ");
		    }
		    printf("*");
		}
		printf("\n");
	}
	return 0;
}
