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
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				printf("The repeating elemet is %d .\n", arr[i]);
				break;
			}
		}
	}
	return 0;
}
