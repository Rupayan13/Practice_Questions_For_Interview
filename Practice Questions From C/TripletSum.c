#include<stdio.h>
int main(){
	int n, s, i, j, k;
	printf("Enter the number of elements :");
	scanf("%d", &n);
	printf("Enter the sum number :");
	scanf("%d", &s);
	int arr[5];
	for(i=0;i<n;i++){
		printf("Enter the element at index %d :", i);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n-2;i++){
		for(j=i+1;j<n-1;j++){
			for(k=j+1;k<n;k++){
				if(arr[i]+arr[j]+arr[k]==s){
					printf("%d %d %d\n", arr[i], arr[j], arr[k]);
				}
			}
		}
	}
	return 0;
}
