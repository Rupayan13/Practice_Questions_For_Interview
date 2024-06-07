#include<stdio.h>
int main(){
	int n, i;
	printf("Enter the number of elements :");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter the element at index %d :", i);
		scanf("%d", &arr[i]);
	}
	int max=arr[0];
	for(i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	int freq[max+1];
	for(i=0;i<=max;i++){
		freq[i]=0;
	}
	for(i=0;i<n;i++){
		freq[arr[i]]++;
	}
	for(i=0;i<n;i++){
		printf("%d occurs in %d times.\n", arr[i], freq[arr[i]]);
	}
	return 0;
}
