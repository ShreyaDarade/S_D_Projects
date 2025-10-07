#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

	printf("\n");


	  //String concate function demonstration

	char* srcString = (char*) malloc(sizeof(char) * MAX_STRING_LENGTH);
	char* destString = (char*) malloc(sizeof(char) * MAX_STRING_LENGTH);

	

	printf("\nmv_strcat() Function Demonstration\n\n");

	printf("\n");

	printf("Enter a source string to concate = ");
	fgets(srcString,100, stdin);
	srcString[strcspn(srcString, "\n")] = '\0';  // remove newline


	//shrink upto the length + 1 size
	srcString = (char*) realloc(srcString, sizeof(char) * (mv_strlen(srcString) + 1 ));


	printf("\n");

	printf("Source string entered by user =  %s",srcString);

	printf("\n\n");

	printf("Enter a  Destination String to concate = ");
	fgets(destString,100,stdin);
	destString[strcspn(destString, "\n")] = '\0';  // remove newline




	printf("\n");
	printf("Destination string entered by user = %s", destString);
	printf("\n\n");

	printf("Before Concatenating Strings......\n");

	printf("Source String before concatination = %s\n", srcString);
	printf("Destination String before concatination = %s\n", destString);

	//call to mv_strcat
	mv_strcat(destString, srcString);

	printf("\n\n");


	printf("After copying Strings....\n");
	printf("Source string after concatination = %s\n", srcString);
	printf("Destination String after concatination = %s", destString);

	//shrink destination string for professionality

	destString = (char*) realloc(destString, (mv_strlen(destString) + 1) +sizeof(char));
	


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