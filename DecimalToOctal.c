#include<stdio.h>
#include<math.h>
int decimalToOctal(int);
int main(){
	int d;
	printf("Enter the binary value :");
	scanf("%d", &d);
	printf("The octal value of %d is %d", d, decimalToOctal(d));
	return 0;
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
