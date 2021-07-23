/*
 ============================================================================
 Name        : Matrix.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,row,col;

	int mat[3][3];
	setbuf(stdout, NULL);
	printf("Enter the  numbers of row of matrix");
	scanf("%d",&row);
	printf("Enter the  numbers of column of matrix");
	scanf("%d",&col);
	printf("Enter the  numbers \n");
	for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				scanf("%d",&mat[i][j]);
			}
		}
	printf("Entered values \n");
	for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d\t",mat[i][j]);
				}
				printf("\n");

			}



	return EXIT_SUCCESS;
}
