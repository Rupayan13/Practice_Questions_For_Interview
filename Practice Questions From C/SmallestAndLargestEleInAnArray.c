#include<stdio.h>
int main(){
	int arr[5], i;
	for(i=0;i<5;i++){
		printf("Enter the element in index %d :", i);
		scanf("%d", &arr[i]);
	}
	int small=arr[0], large=arr[0];
	for(i=0;i<5;i++){
		if(small>=arr[i]){
			small=arr[i];
		}
	}
	for(i=0;i<5;i++){
		if(large<=arr[i]){
			large=arr[i];
		}
	}
	printf("The largest element of array is %d.\n", large);
	printf("The smallest element of array is %d.", small);
	return 0;
}
