#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

/************************************
   Author :Nada Ehab
   project name:string library
   JUNE 3,2023   6:25 pm

************************************/

void *memchr(const void *str, int c, int n);
int memcmp(const void *str1, const void *str2,int n);
void *memcpy(void *dest, const void * src, int n);
void *mymemset(void *str,unsigned char c ,int n);
char *strcat(char *dest, const char *src);
char *strncat(char *dest, const char *src, int n);
char *strchr(const char *str, int c);
int strcmp(const char *str1, const char *str2);
char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, int n);
int  mystrcspn(const char *str1, const char *str2);
int  mystrlen(const char *str);
char *strpbrk(const char *str1, const char *str2);
char *strrchr(const char *str, int c);
int strspn(const char *str1, const char *str2);
char *strstr(const char *haystack, const char *needle);
char *strtok(char *str, const char *delim);
int strxfrm(char *dest, const char *src, int n);

#endif // STRING_H_INCLUDED
