/*
 ============================================================================
 Name        : arraysearch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,num[5],limit,searchkey,count=0;
	setbuf(stdout,NULL);
	printf("Enter limit for array");
	scanf("%d",&limit);
		printf("Enter array");
		for(i=0;i<limit;i++){
			scanf("%d",&num[i]);
		}
		printf("Enter a value");
		scanf("%d",&searchkey);
	for(i=0;i<limit;i++){
		if(num[i] != searchkey){
			count ++;
		}
	}
	if(count !=0){
		printf("%d",count);
	}
	return EXIT_SUCCESS;
}
