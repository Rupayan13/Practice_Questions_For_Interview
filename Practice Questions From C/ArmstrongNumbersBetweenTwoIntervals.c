#include<stdio.h>
#include<math.h>
int count(int);
int checkArmstrong(int n){
	int p=count(n);
	int sum=0, i, num=n;
	while(n>0){
		sum+=pow(n%10, p);
		n/=10;
	}
	if(num==sum){
		return 1;
	}else{
	    return 0;
	}
}
int count(int n){
	int c=0;
	while(n>0){
		c++;
		n/=10;
	}
	return c;
}
int main(){
	int l, u, i;
	printf("Enter the lower bound :");
	scanf("%d", &l);
	printf("Enter the upper bound :");
	scanf("%d", &u);
	for(i=l;i<=u;i++){
		if(checkArmstrong(i)){
			printf("%d is a armstrong number.\n", i);
		}
	}
	return 0;
}
