#include<stdio.h>
#include<math.h>
int binaryToDecimal(int);
int main(){
	int b;
	printf("Enter the binary value :");
	scanf("%d", &b);
	printf("The decimal value of %d is %d", b, binaryToDecimal(b));
	return 0;
}
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
