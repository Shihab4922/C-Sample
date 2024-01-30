/*
 ============================================================================
 Name        : sumofoddnumbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,sum;
	setbuf(stdout,NULL);

		printf("Enter a number for odd number Calculation");
		scanf("%d",&limit);
			for(i=1;i<=limit;i++){
				if(i%2!=0){
					sum+=i;
				}
			}
		printf("%d",sum);
	return EXIT_SUCCESS;
}
