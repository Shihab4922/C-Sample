/*
 ============================================================================
 Name        : palindrome.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	int i,len,flag=0;
	char name[10];
	setbuf(stdout,NULL);

		printf("Enter A Word.");
		scanf("%s",name);
			len=strlen(name);

			for(i=0;i<len;i++){
				if(name[i]!=name[len-i-1]){
					flag=1;
					break;
				}

			}
			if(flag!=0){
				printf("Entered Word Is not Palindrome");
			}
			else{
				printf("Entered Word Is Palindrome");

			}

	return EXIT_SUCCESS;
}
