/*
 ============================================================================
 Name        : functionsample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void displarray(int value[]);
int getarray();

int main(void) {
	int valu[3];
	setbuf(stdout,NULL);
	printf("Enter an Array");
	getarray(valu);
	displarray(valu);
	return EXIT_SUCCESS;
}
int getarray(int value[]){
	int i;
	for(i=0;i<3;i++){
		scanf("%d",&value[i]);
	}
	return 0;
}
void displarray(int value[]){
	int i;
	printf("Displaying\n");
	for(i=0;i<3;i++){
		printf("%d ",value[i]);
	}
}
