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

	//alloacte memory for string
	userInputString = (char*)malloc(sizeof(char) * 100);

	//Get input from user
	printf("Enter a string of your choice = ");
	fgets(userInputString, 100, stdin);
	userInputString[strcspn(userInputString, "\n")] = '\0';

	printf("\n\n");



	//prompt user of the input string
	printf("The string you have entered = %s", userInputString);
	printf("\n");

	//here calculte the length of string 
	long long userStringLength = mv_strlen(userInputString);

	printf("\n");

	printf("The string %s is of length %lld", userInputString,userStringLength);

	printf("\n\n");

	//unallocate after finish using

	if(userInputString);
	{
		free(userInputString);
		userInputString = NULL;
	}
  	
  	printf("\n");

	//Exiting main
	printf("Exiting client{main()}....\n");


	//return success
	return(0);
}