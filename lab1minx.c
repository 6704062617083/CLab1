#include<stdio.h>
int main() {
	int num1;
	printf("Type a num1: \n");
	scanf("%d" , &num1);
	int num2;
	printf("Type a num2: \n");
	scanf("%d" , &num2);
	if (num1>num2){
		printf("num1 is greater than num2 \n");
		//diff of num1 and num2
		printf("%d" , (num1-num2));
	} else {
		printf("num2 is greater than num1 \n");
		//diff of num2 and num1
		printf("%d" , (num2-num1));
	}
}
