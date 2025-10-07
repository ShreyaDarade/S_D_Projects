#include<stdio.h>
#include<stdlib.h>

#include "mv_string.h"

/**********************************************************\
 *  		mv_string INTERFACE Functions
\**********************************************************/

//Function to get length of string
extern long long mv_strlen(char* in_cstr)
{
	//code
	long long length = 0;
	while(in_cstr[length] != '\0')
	{
		length++;
	}

	return(length);
}

//Function to copy srcString to destString
extern long long mv_strcpy(char* destString, char* srcString)
{
	//code
	//step 1: Get length of src string
	long long srcLength = mv_strlen(srcString);

	//step 2: copy 0 - length-1 from src to dest
	for(int long long le = 0; le < srcLength; ++le)
	{
		destString[le] = srcString[le];
	}

	//step 3: assign /0 to length index of dest
	destString[srcLength] = '\0';
	return(srcLength+1);
}