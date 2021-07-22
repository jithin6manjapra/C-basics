/*
 ============================================================================
 Name        : sample2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;
	setbuf(stdout, NULL);
	printf("Enter first number");
	scanf("%d",&a);
	printf("Enter second number");
	scanf("%d",&b);
    c=a;
    a=b;
    b=c;

    printf("a:%d b:%d",a,b);

	return EXIT_SUCCESS;
}
