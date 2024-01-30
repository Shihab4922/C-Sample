/*
 ============================================================================
 Name        : Simple.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p;
	float r,n,si;
	setbuf(stdout,NULL);
	printf("Please Enter Principal Amount,Interest Rate and Number of Years");
	scanf("%d %f %f",&p,&r,&n);
		si=(p*r*n)/100;
	printf("Your simple Interest is %f",si);
	return EXIT_SUCCESS;
}
