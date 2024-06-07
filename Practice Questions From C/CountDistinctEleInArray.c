#include<stdio.h>
int main(){
	int n, i, j;
	printf("Enter the number of elements :");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter the element at index %d :", i);
		scanf("%d", &arr[i]);
	}
	int count=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j){
				if(arr[i]==arr[j]){
					break;
				}
			}
		}
		if(j==n){
			printf("The distinct elemet is %d .\n", arr[i]);
			count++;
		}
	}
	printf("The number of distinct element in the array is %d.", count);
	return 0;
}
