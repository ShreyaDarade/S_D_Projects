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

//Function to copy srcString destString
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

//Function to concate strings
extern char* mv_strcat(char* dest, char* src)
{
	//code
	//step1: find the length of dest string
	long long destLength = mv_strlen(dest);

	//step2: find  the lemgth of source string
	long long srcLength = mv_strlen(src);

	//step3: start copying the characters of src to dest at the end of destination
	for(long long le = 0; le < srcLength; ++le)
	{
		dest[destLength + le] = src[le]; 
	}

	//step4: Explicitly add \0 at the end of concatenated string
	dest[destLength + srcLength] = '\0';

	return(dest);
}

//Function to compare two strings
extern int mv_strcmp(char* str1, char* str2)
{
	//code
	//step1: take length of str1
	long long str1Length = mv_strlen(str1);

	//step2: take length of str2
	long long str2Length = mv_strlen(str2);

	//step3: Check Length inequality
	if(str1Length != str2Length)
	{
		return(str1Length - str2Length);
	}

	//step4: Run the loop to check for equality
	long long index = 0;
	while(1)
	{
		int difference = str1[index] - str2[index];

		if(0 != difference)
		{
			return(difference);
		}
		index++;
		if(str1[index] == '\0' && str2[index] == '\0')
		{
			break;
		}
	}

	return(0);


}


//function to copy n characters
extern char* mv_strncpy(char* destString, char* srcString, long long nr_charcters)
{
	//code

	// check for negative nr_characters
	if(nr_charcters <= 0)
	{
		fprintf(stderr, "ERROR : nr_charcters value is invalid\n");
		return(NULL);
	}

	//step 1: Get length of src string
	long long srcLength = mv_strlen(srcString);

	//check for nr_chracters greater of the length
	if(nr_charcters > srcLength)
	{
		fprintf(stderr,"ERROR : nr_charcters cannot be greater than source string length\n");
		return(NULL);
	}

	//step 2: copy 0 - nr_characters from src to dest
	for(int long long le = 0; le < srcLength; ++le)
	{
		destString[le] = srcString[le];
	}

	//step 3: assign /0 to length index of dest
	destString[nr_charcters] = '\0';
	return(destString);
}