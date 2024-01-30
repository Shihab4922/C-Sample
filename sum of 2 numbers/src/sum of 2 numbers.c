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
	int num1;
	float num2,sum;
	setbuf(stdout,NULL);
	printf("Enter 2 Numbers");
	scanf("%d %f",&num1,&num2);
	sum=num1+num2;
		printf("Sum is %f",sum);
	return EXIT_SUCCESS;
}
