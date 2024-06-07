#include<stdio.h>
int smallest(int arr[], int n){
	int small=arr[0], i;
	for(i=0;i<n;i++){
		if(small>=arr[i]){
			small=arr[i];
		}
	}
	return small;
}
int secondSmallest(int arr[], int n){
	int small=smallest(arr, n);
	int res=small+1, i;
	for(i=0;i<n;i++){
		if(res>=arr[i] && arr[i]!=small){
			res=arr[i];
		}
	}
	return res;
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
	printf("The second smallest element of that array is %d.", secondSmallest(arr, n));
	return 0;
}
