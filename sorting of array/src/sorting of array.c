/*
 ============================================================================
 Name        : sorting.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,temp,limit;
	int a[10];
	setbuf(stdout,NULL);

		printf("Enter a limit for array");
		scanf("%d",&limit);
			printf("Enter numbers");
			for(i=0;i<limit;i++){
				scanf("%d",&a[i]);
			}

		for(i=0;i<limit-1;i++){
			for(j=i+1;j<limit;j++){
				if(a[i]<a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("sorted array is: ");
		for(i=0;i<limit;i++){
			printf("%d ",a[i]);
		}
	return EXIT_SUCCESS;
}
