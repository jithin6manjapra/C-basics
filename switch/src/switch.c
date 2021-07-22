/*
 ============================================================================
 Name        : switch.c
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
		printf("Enter a number 1 for display monday and 2 for display tuesday");
		scanf("%d",&a);
		switch(a)
		{
		case 1:printf("monday");break;
		case 2:printf("tuesday");break;
		default:printf("invalid");break;
		}

	return EXIT_SUCCESS;
}
