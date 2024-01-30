/*
 ============================================================================
 Name        : starpattern2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,n;
	setbuf(stdout,NULL);
		printf("Enter a Number to Print Pattern");
		scanf("%d",&n);

			for(i=1;i<=n;i++){
				for(j=n;j>i;j--){
					printf(" ");
				}
				for(k=0;k<i;k++){
					printf("* ");
				}

			printf("\n");

			}
	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(k=n;k>i;k--){
			printf("* ");
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
