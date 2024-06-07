#include<stdio.h>
int main(){
	int arr[5], i;
	for(i=0;i<5;i++){
		printf("Enter the element in index %d :", i);
		scanf("%d", &arr[i]);
	}
	int sum=0;
	for(i=0;i<5;i++){
		sum+=arr[i];
	}
	printf("The sum of all elements in the array is %d.", sum);
	return 0;
}
