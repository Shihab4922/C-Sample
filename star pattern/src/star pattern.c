/*
 ============================================================================
 Name        : star.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n,k;
	setbuf(stdout,NULL);

		printf("Enter a Number For Printing Star pattern");
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
	return EXIT_SUCCESS;
}
