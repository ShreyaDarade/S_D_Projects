//header
#include<stdio.h>
#include<stdlib.h>

//Global variable definition
int le = 0;


//Defining Character Pointer for string
char *nameString = NULL;

//Entry point function
int main()
{
	//code
	printf("Entering Main()......\n");

	//Below we code for string(char*)

	nameString = (char*)malloc(sizeof(char) * 20);
	printf("\n");

	printf("Enter a name String = ");
	//scanf("%s", nameString);
	fgets(nameString, 20, stdin);

	printf("\n\n");

	printf("Entered String by you = %s\n", nameString);


	printf("\n\n");


	

	while(nameString[le] != '\0')
	{
		printf("nameString[%d] = %c\n", le, nameString[le]);

		le++;
	}

	//unalloacte memory
	if(nameString)
	{
		free(nameString);
		nameString = NULL;
	}

	



	//Main exiting
	printf("Exiting Main()......");


	return(0);
}