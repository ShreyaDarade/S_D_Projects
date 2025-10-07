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


	char* str1 = (char*) malloc(sizeof(char) * MAX_STRING_LENGTH);
	char* str2 = (char*) malloc(sizeof(char) * MAX_STRING_LENGTH);
	long long user_NRcharacters = 0;
	

	printf("\nmv_strncmp() Function Demonstration\n");

	printf("\n");

	printf("Enter a String1 to comapre = ");
	fgets(str1,100, stdin);
	str1[strcspn(str1, "\n")] = '\0';

	//shrink upto the length + 1 size
	str1 = (char*) realloc(str1, sizeof(char) * (mv_strlen(str1) + 1 ));


	printf("\n");

	printf("String1 entered by user =  %s",str1);

	printf("\n\n");

	printf("Enter string2 to compare = ");
	fgets(str2, 100, stdin);
	str2[strcspn(str2 , "\n")] = '\0';


	//shrink upto the length + 1 size
	str2 = (char*) realloc(str2, sizeof(char) * (mv_strlen(str2) + 1 ));

	printf("\n");

	printf("String2 entered by user =  %s", str2);

	printf("\n\n");

	printf("Enter no. of chracters to compare:  ");
	scanf("%lld", &user_NRcharacters);

	printf("\n");

	printf("Comparing Strings......\n");

	printf("String1 = %s", str1);
	printf("\n");
	printf("String2 = %s", str2);
	printf("\n");

     long long difference_result = mv_strncmp(str1, str2, user_NRcharacters);
     {

     	 
     	 if(difference_result == 0)
     	 {
     	 	fprintf(stdout, "%s and %s is equal for  %lld chracters", str1, str2, user_NRcharacters);
     	 }
     	 else if(difference_result > 0)
     	 {
     	 	fprintf(stdout,"%s is greater than %s for %lld chracters\n", str1, str2, user_NRcharacters);
     	 }
     	 else 
     	 {
     	 	fprintf(stdout,"%s is lesser than %s for %lld chracters\n", str1, str2, user_NRcharacters);
     	 }
     	 
	}
	


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