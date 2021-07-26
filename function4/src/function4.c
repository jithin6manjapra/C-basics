/*
 ============================================================================
 Name        : function4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int subtract();
int main(void) {


	int sub1;
	sub1=subtract();
	printf("subtract= %d",sub1);

	return EXIT_SUCCESS;
}

int subtract()
{
	int num1,num2;
	int sub=0;
		setbuf(stdout, NULL);
		printf("Enter the 2 numbers to subtract\n");
		scanf("%d%d",&num1,&num2);

	sub=num1-num2;
	return sub;
}
