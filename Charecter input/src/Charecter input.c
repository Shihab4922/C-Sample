/*
 ============================================================================
 Name        : Charecter.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	setbuf(stdout,NULL);
	puts("Enter Your Letter");
	scanf("%c",&c);
	printf("You Have Entered %c",c);
	return EXIT_SUCCESS;
}
