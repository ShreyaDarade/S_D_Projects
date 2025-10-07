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


	userInputString = (char*) realloc(userInputString, mv_strlen(userInputString + 1) * sizeof(char));


	//prompt user of the input string
	printf("The String you have entered = %s\n", userInputString);

	//here calculte the length of string 
	long long userStringLength = mv_strlen(userInputString);

	printf("The string %s is of length %lld", userInputString,userStringLength);


	  //String copy function demonstration

	char* srcString = (char*) malloc(sizeof(char) * MAX_STRING_LENGTH);
	char* destString = (char*) malloc(sizeof(char) * MAX_STRING_LENGTH);

	

	printf("\n\nmv_strcpy() Function Demonstration\n");

	printf("Enter a Source string to copyy = ");
	fgets(srcString,100, stdin);

	//shrink upto the length + 1 size
	srcString = (char*) realloc(srcString, sizeof(char) * (mv_strlen(srcString) + 1 ));


	printf("\n");

	printf("Source string entered by user =  %s",srcString);

	printf("\n");

	printf("Before Copying Strings......\n");

	printf("Source String before copying = %s", srcString);
	printf("Destination String before copying = %s\n", destString);

	//call to mv_strcpy
	mv_strcpy(destString, srcString);

	printf("\n\n");


	printf("After copying Strings....\n");
	printf("Source string after copying = %s", srcString);
	printf("Destination String after copying = %s", destString);
	


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