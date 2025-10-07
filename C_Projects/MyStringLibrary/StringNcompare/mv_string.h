#ifndef _MV_STRING_H
#define _MV_STRING_H

// mv_string function declarations

//function to get length of string
extern long long mv_strlen(char* in_cstr);

extern long long  mv_strcpy(char* destString, char* srcString);

extern char* mv_strcat(char* dest, char* src);

extern int mv_strcmp(char* str1, char* str2);

extern char* mv_strncpy(char* destString, char* srcString, long long nr_charcters);


extern int mv_strncmp(char* str1, char* str2, long long user_NRcharacters);





#endif  //_MV_STRING_H