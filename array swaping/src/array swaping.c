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
	int a[5],b[5],c[5];
	int i;
	setbuf(stdout,NULL);
		printf("Enter numbers for array 1");
		for(i=0;i<5;i++){
			scanf("%d",&a[i]);
		}
		printf("Enter numbers for array 2");
		for(i=0;i<5;i++){
			scanf("%d",&b[i]);
		}
		for(i=0;i<5;i++){
			c[i]=a[i];
			a[i]=b[i];
			b[i]=c[i];
		}
		printf("Swapped Array a=");
		for(i=0;i<5;i++){
			printf("%d ",a[i]);
					}
		printf("\nSwapped Array b=");
		for(i=0;i<5;i++){
			printf("%d ",c[i]);
		}
	return EXIT_SUCCESS;
}
