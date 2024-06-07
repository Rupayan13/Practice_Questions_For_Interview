#include<stdio.h>
int main(){
	int n, m, i, j;
	printf("Enter the number of terms for array1 :");
	scanf("%d", &n);
	printf("Enter the number of terms for array2 :");
	scanf("%d", &m);
	int arr1[n], arr2[m];
	for(i=0;i<n;i++){
		printf("Enter the element in the array1 at index %d :", i);
		scanf("%d", &arr1[i]);
	}
	for(j=0;j<m;j++){
		printf("Enter the element in the array2 at index %d :", j);
		scanf("%d", &arr2[j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(arr1[i]==arr2[j]){
				break;
			}
		}
	}
	if(j==m){
		printf("The two arrays are disjoint array.");
	}else{
		printf("The two arrays are not a disjoint array.");
	}
	return 0;
}
