/*
 ============================================================================
 Name        : 2darray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,sum[3][3],value[3][3],value2[3][3];
	setbuf(stdout,NULL);
	printf("Enter 2D array");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				scanf("%d",&value[i][j]);
			}
		}
		printf("Enter Array2");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				scanf("%d",&value2[i][j]);
			}
		}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				sum[i][j]=value[i][j]+value2[i][j];
			}
		}
		printf("Sum of array is:\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d",sum[i][j]);
				printf("\t");
			}
			printf("\n");
		}
	return EXIT_SUCCESS;
}
