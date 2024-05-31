#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d", &n);
	int num=n, sum=0, count=0;
	while(n>0){
		if(n%10==0){
			sum+=((1)*(int)pow(10, count));
		}else{
			sum+=((n%10)*(int)pow(10, count));
		}
		count++;
		n/=10;
	}
	printf("Now the number changed from %d to %d", num, sum);
	return 0;
}
