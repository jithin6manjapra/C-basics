/*
 ============================================================================
 Name        : negative&positive.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	setbuf(stdout, NULL);
	printf("Enter a number");
	scanf("%d",&a);
	if(a>=0)
	{
		printf("Positive");
	}
	else
	{
		printf("Negative");
	}
	return EXIT_SUCCESS;
}
