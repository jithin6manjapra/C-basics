/*
 ============================================================================
 Name        : function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :function with argument and no return value
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum();
int main(void) {

	int num1,num2;

		setbuf(stdout, NULL);

		printf("Enter two numbers");
		scanf("%d%d",&num1,&num2);

	sum(num1,num2);
	return EXIT_SUCCESS;
}

void sum(int num1,int num2)
{
	int tot=0;
		tot=num1+num2;
		printf("sum=%d",tot);
}
