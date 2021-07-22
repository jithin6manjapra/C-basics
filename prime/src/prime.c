/*
 ============================================================================
 Name        : prime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,i;
	int f=0;
	setbuf(stdout, NULL);
	printf("Enter a number ");
			scanf("%d",&a);
			for(i=2;i<a/2;i++){
				if(a%2==0){
					f=1;break;
				}
			}
	if(f==0)
	{
		printf(" prime");

	}
	else
	{
		printf("not  prime");

	}
	return EXIT_SUCCESS;
}
