#include<stdio.h>
int perfectSquare(int n){
	if(n==1) return 1;
	int i;
	for(i=1;i<=n/2;i++){
		if(i*i==n){
			return 1;
		}
	}
	return 0;
}
int main(){
	int n;
	printf("Enter the number of elements in the array :");
	scanf("%d", &n);
	int arr[n], i;
	for(i=0;i<n;i++){
		printf("Enter element into the index %d :", i);
		scanf("%d", &arr[i]);
	}
	int sum=0;
	for(i=0;i<n;i++){
		if(perfectSquare(arr[i])){
			sum+=arr[i];
		}
	}
	printf("The sum of the perfect square elements in the array is %d.", sum);
	return 0;
}
