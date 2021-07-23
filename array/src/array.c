/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[50];
	int n,i,j,temp;
	setbuf(stdout, NULL);
	printf("Enter the n numbers");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++)
	{
		for(j=i+1;i<n-1;i++)//limit
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;

			}
		}

	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}

		//{
		//	printf("%d",a[i]);
		//}
	return EXIT_SUCCESS;
}
