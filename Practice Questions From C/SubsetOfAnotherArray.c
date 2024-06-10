#include<stdio.h>
int main(){
	int n, m, i, j;
	printf("Enter the number of terms in the array 1: ");
	scanf("%d", &n);
	int arr1[n];
	printf("Enter the number of terms in the array 2: ");
	scanf("%d", &m);
	int arr2[m];
	for(i=0;i<n;i++){
		printf("Enter the elements in array 1 at index %d:", i);
		scanf("%d", arr1[i]);
	}
	for(j=0;j<m;j++){
		printf("Enter the elements in array 2 at index %d:", j);
		scanf("%d", arr2[j]);
	}
	if(n<=m){
		printf("array2 is not a subarray of array1.");
	}else{
		for(j=0;j<m;j++){
			char isPresent='F';
			for(i=0;i<n;i++){
				if(arr1[i]==arr2[j]){
					isPresent='T';
				}
			}
			if(isPresent=='F'){
				break;
			}
		}
		if(j==m){
			printf("array2 is a subarray of array1.");
		}else{
			printf("array2 is not a subarray of array1.");
		}
	}
	return 0;
}
