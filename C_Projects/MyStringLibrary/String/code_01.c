//header
#include<stdio.h>
#include<stdlib.h>

//Global variable definition
int le = 0;

//Defining Character Array
char nameCarr[5];
char temp;

//Defining Character Pointer for string
char *nameString = NULL;

//Entry point function
int main()
{
	//code
	printf("Entering Main()......\n");

	printf("Enter 5 Characters for nameCarr: 	\n");

	//Loop to write data to array from user input value
	for(int le = 0; le < 5; ++le)
	{
		printf("Enter Character %d for nameCarr[%d] = ", le, le);

		scanf("%c", &nameCarr[le]);
		scanf(" %c", &temp);


	}

	printf("\n\n");
	printf("Data of nameCarr:\n");

	//loop to print data of array
	for(int le = 0; le < 5; ++le)
	{
		printf("nameCarr[%d] = %c\n", le , nameCarr[le]);
	}


	printf("\n\n\n");

	//Below we code for string(char*)

	nameString = (char*)malloc(sizeof(char) * 20);

	printf("Enter a name String = ");
	scanf("%s", nameString);

	printf("\n\n");

	printf("Entered String by you = %s\n", nameString);


	printf("\n\n\n");


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