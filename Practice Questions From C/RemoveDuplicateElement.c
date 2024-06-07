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
	int temp1[n];
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				temp1[j]=1;
				break;
			}
		}
	}
	printf("The new array is :-");
	for(i=0;i<n;i++){
		if(temp1[i]!=1){
			printf("%d\t", arr[i]);
		}
	}
	return 0;
}
