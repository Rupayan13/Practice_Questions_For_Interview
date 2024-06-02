#include<stdio.h>
int main(){
	int n, m;
	printf("Enter the number of elements in the first array :");
	scanf("%d", &n);
	int arr1[n], i;
	for(i=0;i<n;i++){
		printf("Enter the element in index %d :", i);
		scanf("%d", &arr1[i]);
	}
	printf("Enter the number of elements in the second array :");
	scanf("%d", &m);
	int arr2[m], j;
	for(j=0;j<m;j++){
		printf("Enter the element in index %d :", j);
		scanf("%d", &arr2[j]);
	}
	char flag='T';
	if(n!=m){
		flag='F';
	}else{
		for(i=0;i<n;i++){
			if(arr1[i]!=arr2[i]){
				flag='F';
				break;
			}
		}
	}
	if(flag=='T'){
		printf("The two arrays are same.");
	}else{
		printf("The two arrays are not same.");
	}
	return 0;
}
