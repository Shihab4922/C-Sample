/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,a[3][3],b[3][3],sum[3][3];
	setbuf(stdout,NULL);

		printf("Enter An 2D Array");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				scanf("%d ",&a[i][j]);
			}

		}
		printf("Enter 2nd Array");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				scanf("%d ",&b[i][j]);
			}
		}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				sum[i][j]=a[i][j]+b[i][j];
			}
		}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d ",sum[i][j]);
			}
			printf("\n");
		}

	return EXIT_SUCCESS;
}
