/*
 ============================================================================
 Name        : Sample1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	int sum=0;
	setbuf(stdout, NULL);

	printf("Enter two numbers");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("sum=%d",sum);
	return EXIT_SUCCESS;
}
