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


	  //String in string function demonstration

	char* str1 = (char*) malloc(sizeof(char) * MAX_STRING_LENGTH);
	char* str2 = (char*) malloc(sizeof(char) * MAX_STRING_LENGTH);


	printf("\nmv_strstr() Function Demonstration\n");

	printf("\n");

	printf("Enter a String1 = ");
	fgets(str1,100, stdin);
	str1[strcspn(str1, "\n")] = '\0';

	//shrink upto the length + 1 size
	str1 = (char*) realloc(str1, sizeof(char) * (mv_strlen(str1) + 1 ));

	printf("\n");

	printf("Enter a String2 to find in String1  = ");
	fgets(str2,100, stdin);
	str2[strcspn(str2, "\n")] = '\0';

	//shrink upto the length + 1 size
	str2 = (char*) realloc(str2, sizeof(char) * (mv_strlen(str2) + 1 ));

	printf("\n");

	//call to mv_strstr function
	char* result = mv_strstr(str1, str2);
	if(NULL != result)
	{

			printf("Found %s in %s at %s ", str2, str1, result);

	}
	else
	{
		fprintf(stderr, "ERROR : %s was not found in %s", str2,str1);
	}

	printf("\n");

	



	//unallocate after finish using

	if(str1)
	{
		free(str1);
		str1 = NULL;
	}
	if(str2)
	{
		free(str2);
		str2 = NULL;

	}
	

  	printf("\n");

	//Exiting main
	printf("Exiting client{main()}....\n");


	//return success
	return(0);
}