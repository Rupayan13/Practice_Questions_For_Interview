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
	printf("Before reversing the array is :-\n");
	for(i=0;i<n;i++){
		printf("%d\t", arr[i]);
	}
	int l=0; int h=n-1;
	while(l<=h){
		int temp=arr[l];
		arr[l]=arr[h];
		arr[h]=temp;
		l++;
		h--;
	}
	printf("\nAfter reversing the array is :-\n");
	for(i=0;i<n;i++){
		printf("%d\t", arr[i]);
	}
	return 0;
}
