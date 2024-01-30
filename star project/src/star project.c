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
	int i,j,k,l,num;
	setbuf(stdout,NULL);

	printf("enter number to print star");
	scanf("%d",&num);
		for(i=1;i<=num;i++){
			for(j=0;j<i;j++){
				printf("* ");
			}
		printf("\n");
		}
		for(k=1;k<=num;k++){
			for(l=num;l>k;l--){
				printf("* ");
			}
		printf("\n");
		}
	return EXIT_SUCCESS;
}
