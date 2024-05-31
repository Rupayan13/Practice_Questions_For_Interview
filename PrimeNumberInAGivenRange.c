#include<stdio.h>
#include<math.h>
int prime(int n){
	int i;
	char flag='T';
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag='F';
			break;
		}
	}
	if(flag=='T'){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int l, u, i;
	printf("Enter the lower bound :");
	scanf("%d", &l);
	printf("Enter the upper bound :");
	scanf("%d", &u);
	for(i=l;i<=u;i++){
		if(prime(i)){
			printf("%d is a prime number.\n", i);
		}
	}
	return 0;
}
