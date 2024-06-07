#include<stdio.h>
#include<math.h>
int decimalToBinary(int);
int main(){
	int d;
	printf("Enter the binary value :");
	scanf("%d", &d);
	printf("The binary value of %d is %d", d, decimalToBinary(d));
	return 0;
}
int decimalToBinary(int n){
	int res=0;
	int p=1;
	while(n>0){
		int rem=n%2;
		res+=(rem*p);
		p*=10;
		n/=2;
	}
	return res;
}
