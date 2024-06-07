#include<stdio.h>
int main(){
	int n, i;
	printf("Enter the number of elements :");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter the element at index %d :", i);
		scanf("%d", &arr[i]);
	}
	int even=0, odd=0;
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			even++;
		}else{
			odd++;
		}
	}
	printf("The number of even elements in the array is %d.\n", even);
	printf("The number of odd elements in the array is %d.", odd);
	return 0;
}
