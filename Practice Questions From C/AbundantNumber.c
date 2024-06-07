#include<stdio.h>
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d", &n);
	int sum=0, i;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(n<sum){
		printf("%d is a abundant number.", n);
	}else{
		printf("%d is not a abundant number.", n);
	}
	return 0;
}
