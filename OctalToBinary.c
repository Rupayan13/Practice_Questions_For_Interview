#include<stdio.h>
#include<math.h>
int octalToDecimal(int n){
	int res=0;
	int p=0;
	while(n>0){
		res+=(n%10)*(int)pow(8, p);
		p++;
		n/=10;
	}
	return res;
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
int main(){
	int o;
	printf("Enter the binary value :");
	scanf("%d", &o);
	printf("The binary value of %d is %d", o, decimalToBinary(octalToDecimal(o)));
	return 0;
}

