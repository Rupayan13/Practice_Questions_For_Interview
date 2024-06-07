#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of elements in the array :");
	scanf("%d", &n);
	int arr[n], i, j;
	for(i=0;i<n;i++){
		printf("Enter element into the index %d :", i);
		scanf("%d", &arr[i]);
	}
	printf("Before sorting the array is :-\n");
	for(i=0;i<n;i++){
		printf("%d\t", arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\nAfter sorting the array is :-\n");
	for(i=0;i<n;i++){
		printf("%d\t", arr[i]);
	}
	return 0;
}
