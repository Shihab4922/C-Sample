/*
 ============================================================================
 Name        : grade.c
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
		if(mark>=90){
			printf("Your Grade is A");
		}
		else if(mark<90&&mark>=80){
			printf("Your Grade is B");
		}
		else if(mark<80&&mark>=70){
			printf("Your Mark is C");
		}
		else if(mark<70&&mark>=60){
			printf("Your Mark is D");
		}
		else if(mark<60&&mark>=50){
			printf("Your Mark is E");
		}else if(mark<50){
			printf("You Are failed Try next time");
		}
	return EXIT_SUCCESS;
}
