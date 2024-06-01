#include<stdio.h>
#include<math.h>
int binaryToDecimal(int n){
	int res=0;
	int p=0;
	while(n>0){
		res+=(n%10)*(int)pow(2, p);
		p++;
		n/=10;
	}
	return res;
}
int decimalToOctal(int n){
	int res=0;
	int p=1;
	while(n>0){
		int rem=n%8;
		res+=(rem*p);
		p*=10;
		n/=8;
	}
	return res;
}
int main(){
	int b;
	printf("Enter the binary number :");
	scanf("%d", &b);
	printf("The octal value of %d is %d", b, decimalToOctal(binaryToDecimal(b)));
	return 0;
}
