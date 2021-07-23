/*
 ============================================================================
 Name        : function_type3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : function with argument and with return value
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int subtract(int,int);
int main(void) {

	int num1,num2;
	int sub1;
	setbuf(stdout, NULL);
	printf("Enter the 2 numbers to subtract\n");
	scanf("%d%d",&num1,&num2);

	sub1=subtract(num1,num2);
	printf("subtract= %d",sub1);

	return EXIT_SUCCESS;
}

int subtract(int num1,int num2)
{
	int sub=0;
	sub=num1-num2;
	return sub;
}
