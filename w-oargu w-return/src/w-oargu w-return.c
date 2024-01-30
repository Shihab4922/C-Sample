/*
 ============================================================================
 Name        : w-oargu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum();
int main(void) {
	int r;
	setbuf(stdout,NULL);
	r=sum();
	printf("Result is:%d",r);
	return EXIT_SUCCESS;
}
int sum() {
	int a,b,sum;
	printf("Enter 2Numbers");
	scanf("%d%d",&a,&b);
	sum=a+b;
	return sum;
}
