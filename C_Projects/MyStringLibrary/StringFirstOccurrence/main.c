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

	printf("Entering Client{main()}........\n");

	printf("\n");


	  //String copy of NR Characters function demonstration

	char* str1 = (char*) malloc(sizeof(char) * MAX_STRING_LENGTH);

	char toSerachChar = 0;
	
	

	printf("\nmv_strchr() Function Demonstration\n");

	printf("\n");

	printf("Enter a string1 = ");
	fgets(str1,100, stdin);

	//shrink upto the length + 1 size
	str1 = (char*) realloc(str1, sizeof(char) * (mv_strlen(str1) + 1 ));


	printf("\n");

	printf("String1 Entered By User =  %s",str1);

	printf("\n\n");

	printf("Enter The Character To Search = ");
	scanf("%c", &toSerachChar);

	printf("\n");

	//call to strchr function

	char* result = mv_strchr(str1, toSerachChar);

	if(NULL != result)
	{
		printf("The %c Character Was Found At %s\n", toSerachChar, result);

	}

	else
	{
		printf("The %c Character Was Not Found\n");
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