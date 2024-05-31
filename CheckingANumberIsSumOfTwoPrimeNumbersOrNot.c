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
	int n, i;
	printf("Enter the number :");
	scanf("%d", &n);
	char flag='F';
	for(i=1;i<=n;i++){
		if(prime(i)&&prime(n-i)){
			printf("%d can be written using summation of two prime numbers %d and %d.\n", n, i, (n-i));
			flag='T';
	    }
	}
	if(flag=='F'){
		printf("%d can not be written using summation of two prime numbers.", n);
	}
	return 0;
}
