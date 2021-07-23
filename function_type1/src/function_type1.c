/*
 ============================================================================
 Name        : function_type1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : function without argument and return value
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum();
int main(void) {
	sum();
	return EXIT_SUCCESS;
}

void sum()
{
	int num1,num2;
		int sum=0;
		setbuf(stdout, NULL);

		printf("Enter two numbers");
		scanf("%d%d",&num1,&num2);
		sum=num1+num2;
		printf("sum=%d",sum);
}
