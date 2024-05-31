#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter the three numbers :");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b){
		if(a>c){
			printf("The greatest of the three element is is %d", a);
		}else{
		    printf("The greatest of the three element is is %d", c);	
		}
	}else{
		if(b>c){
			printf("The greatest of the three element is is %d", b);
		}else{
		    printf("The greatest of the three element is is %d", c);	
		}
	}
	return 0;
}
