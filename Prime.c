#include<stdio.h>
#include<math.h>
int main(){
	int n, i;
	char flag='T';
	printf("Enter the number :");
	scanf("%d", &n);
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag='F';
			break;
		}
	}
	if(flag=='T'){
		printf("%d is a prime number.", n);
	}else{
		printf("%d is not a prime number.", n);
	}
	return 0;
}
