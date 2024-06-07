#include<stdio.h>
void sort_asc(int arr[], int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main(){
	int n, i;
	printf("Enter the number of elements :");
	scanf("%d", &n);
	int arr1[n], arr2[n];
	for(i=0;i<n;i++){
		printf("Enter the element at index %d in array1:", i);
		scanf("%d", &arr1[i]);
	}
	for(i=0;i<n;i++){
		printf("Enter the element at index %d in array2:", i);
		scanf("%d", &arr2[i]);
	}
	sort_asc(arr1, n);
	sort_asc(arr2, n);
	int res=0;
	for(i=0;i<n;i++){
		res+=(arr1[i]*arr2[i]);
	}
	printf("The maximum scalar product of two vectors is : %d.", res);
	return 0;
}
