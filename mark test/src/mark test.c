/*
 ============================================================================
 Name        : mark.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("Enter Your Mark");
	scanf("%f",&mark);
		if(mark>=50){
			printf("passed Congratulation");
		}else{
			printf("Failed Better luck Next Time");
		}
	return EXIT_SUCCESS;
}
