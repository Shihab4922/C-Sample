/*
 ============================================================================
 Name        : break&continue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	setbuf(stdout,NULL);

	for(i=1;i<=10;i++){
		printf("Hay\n");
		if(i==5){
			continue;
		}
		printf("hello\n");

	}
	printf("finished");

	return EXIT_SUCCESS;
}
