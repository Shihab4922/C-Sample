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

void sum();
int main(void) {
	setbuf(stdout,NULL);
	int a,b;
	printf("Enter 2 Numbers.");
	scanf("%d",&a);
	scanf("%d",&b);
	sum(a,b);
	return EXIT_SUCCESS;
}
void sum(int a,int b) {
	int sum;
	sum = a+b;
	printf("Result is:%d",sum);
}
