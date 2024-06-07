#include<stdio.h>
int isPalindrome(int n){
	int num=n, sum=0;
	while(n>0){
		sum=(sum*10)+(n%10);
		n/=10;
	}
	if(sum==num){
		return 1;
	}
	return 0;
}
int main(){
	int n, i;
	printf("Enter the number of elements :");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter the element at index %d :", i);
		scanf("%d", &arr[i]);
	}
	int max=0;
	for(i=0;i<n;i++){
		if(isPalindrome(arr[i])){
			if(max<arr[i]){
				max=arr[i];
			}
		}
	}
	printf("The largest palindrome in the array is %d.", max);
	return 0;
}
