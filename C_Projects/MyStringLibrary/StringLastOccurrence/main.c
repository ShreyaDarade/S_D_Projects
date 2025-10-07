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


	char* str1 = (char*) malloc(sizeof(char) * MAX_STRING_LENGTH);

	char toSerachChar = 0;
	
	
	printf("\n\nmv_strrchr() Function Demonstration\n");

	printf("\n");

	printf("Enter a String1 = ");
	fgets(str1,100, stdin);

	// remove trailing newline if present
size_t len = mv_strlen(str1);
if (len > 0 && str1[len - 1] == '\n') {
    str1[len - 1] = '\0';
}


	//shrink upto the length + 1 size
	str1 = (char*) realloc(str1, sizeof(char) * (mv_strlen(str1) + 1 ));


	printf("\n");

	printf("String1 Entered By User =  %s",str1);

	printf("\n\n");

	printf("Enter the Character to Search = ");
	scanf("%c", &toSerachChar);

	printf("\n");

	//call to strchr function

	char* result_start= mv_strchr(str1, toSerachChar);

	if(NULL != result_start)
	{

		printf("The %c character was found at %s from START\n", toSerachChar, result_start);


	}

	else
	{
		printf("The %c character was not found\n",toSerachChar);
	}

	//call to mv_strrchr function
	char* result_reverse = mv_strrchr(str1, toSerachChar);

	if(NULL != result_reverse)
	{
		printf("The %c character was found at %s from END\n", toSerachChar, result_reverse);


	}

	else
	{
		printf("The %c character was not found\n",toSerachChar);
	}



	//unallocate after finish using

	if(str1)
	{
		free(str1);
		str1 = NULL;

}
	

  	printf("\n");

	//Exiting main
	printf("Exiting client{main()}....\n");


	//return success
	return(0);
}