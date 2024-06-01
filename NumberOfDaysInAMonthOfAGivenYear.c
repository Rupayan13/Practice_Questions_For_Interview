#include<stdio.h>
int leapYear(int y){
	if(y%100==0){
		if(y%400==0){
			return 1;
		}else{
			return 0;
		}
	}else if(y%4==0){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int m, y;
	printf("Enter the month :");
	scanf("%d", &m);
	printf("Enter the year :");
	scanf("%d", &y);
	if(m==2){
		if(leapYear(y)){
			printf("29");
		}else{
			printf("28");
		}
	}else if(m==4 || m==6 || m==9 || m==11){
		printf("30");
	}else{
		printf("31");
	}
	return 0;
}
