/*
 ============================================================================
 Name        : w-argu.c
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
	int a,b,r;
	setbuf(stdout,NULL);
	printf("Enter 2 Numbers.");
	scanf("%d%d",&a,&b);
	r=sum(a,b);
	printf("Result is:%d",r);
	return EXIT_SUCCESS;
}
int sum(int a,int b) {
	int sum;
	sum=a+b;
	return sum;
}
