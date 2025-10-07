#include<stdio.h>
#include<stdlib.h>

#include "mv_string.h"

//constant macro definition
#define MAX_STRING_LENGTH   1024

//Global variable definition
char *userInputString = NULL;

//Entry point function
int main()
{
	//code

	printf("\n");

	printf("Entering client{main()}........\n");


	  //String copy of NR Characters function demonstration

	char* srcString = (char*) malloc(sizeof(char) * MAX_STRING_LENGTH);
	char* destString = (char*) malloc(sizeof(char) * MAX_STRING_LENGTH);
	long long user_NRcharacters = 0;
	

	printf("\nmv_strncpy() Function Demonstration\n");

	printf("\n");

	printf("Enter a Source string  = ");
	fgets(srcString,100, stdin);

	//shrink upto the length + 1 size
	srcString = (char*) realloc(srcString, sizeof(char) * (mv_strlen(srcString) + 1 ));

	printf("\n");

	printf("Source string entered by user =  %s",srcString);

	printf("\n");

	printf("Enter no. of chracters to copy: ");
	scanf("%d", &user_NRcharacters);

	printf("\n");

	printf("Copying Strings......\n");

	printf("\n");

	printf("Source String  = %s", srcString);

	printf("\n");

	printf("Destination String = %s\n", destString);

     if( NULL != mv_strncpy(destString, srcString,user_NRcharacters) )
     {

     	 destString = (char*) realloc(destString, sizeof(char) * (user_NRcharacters) + 1);
    	 printf("\n");

     	printf("After Copying N Charactrs\n");

     	printf("\n");

		printf("Source String  = %s", srcString);

		printf("\n");

		printf("Destination String = %s\n", destString);

	}
	
	//unallocate after finish using

	if(srcString)
	{
		free(srcString);
		srcString = NULL;
	}

	if(destString)
	{
		free(destString);
		destString = NULL;
	}
	

  	printf("\n");

	//Exiting main
	printf("Exiting client{main()}....\n");


	//return success
	return(0);
}