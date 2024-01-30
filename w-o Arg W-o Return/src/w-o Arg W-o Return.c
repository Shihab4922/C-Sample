/*
 ============================================================================
 Name        : w-o.c
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
	printf("Enter A Number");
	sum();
	return EXIT_SUCCESS;
}
void sum() {
	int a,b,sum;
	scanf("%d",&a);
	scanf("%d",&b);
	sum=a+b;
	printf("%d",sum);
}
