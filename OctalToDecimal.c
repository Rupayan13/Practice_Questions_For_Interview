#include<stdio.h>
#include<math.h>
int octalToDecimal(int);
int main(){
	int o;
	printf("Enter the binary value :");
	scanf("%d", &o);
	printf("The decimal value of %d is %d", o, octalToDecimal(o));
	return 0;
}
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
