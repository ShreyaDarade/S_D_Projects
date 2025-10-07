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

