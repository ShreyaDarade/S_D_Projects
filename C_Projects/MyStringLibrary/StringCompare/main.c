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



	  //String compare function demonstration

	char* srcString = (char*) malloc(sizeof(char) * MAX_STRING_LENGTH);
	char* destString = (char*) malloc(sizeof(char) * MAX_STRING_LENGTH);

	

	printf("\n\nmv_strcmp() Function Demonstration\n");

	printf("\n");

	printf("Enter a Source string to compare = ");
	fgets(srcString,100, stdin);
	srcString[strcspn(srcString, "\n")] = '\0';


	//shrink upto the length + 1 size
	srcString = (char*) realloc(srcString, sizeof(char) * (mv_strlen(srcString) + 1 ));


	printf("\n");

	printf("Source string entered by user =  %s",srcString);

	printf("\n\n");

	printf("Enter a  Destination String to compare =");
	fgets(destString,100,stdin);
	destString[strcspn(destString, "\n")] = '\0';


	//shrink destination string for professionality

	destString = (char*) realloc(destString, (mv_strlen(destString) + 1) +sizeof(char));
	

	printf("\n");
	printf("Destination string entered by user = %s", destString);
	printf("\n\n");

	printf("Comparing Strings......\n");

	printf("Source String  = %s\n", srcString);
	printf("Destination String = %s\n", destString);

	printf("\n");

	int comparison_result = mv_strcmp(srcString, destString);

	if(0 == comparison_result)
	{
		printf("%s  and %s are Equal\n", srcString, destString);
	}

	else if(comparison_result > 0)
	{
		printf("%s is greater than %s\n", srcString, destString );
	}
	else
	{
		printf("%s is lesser than %s", srcString, destString); 
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
	

  	printf("\n\n");

	//Exiting main
	printf("Exiting client{main()}....\n");


	//return success
	return(0);
}