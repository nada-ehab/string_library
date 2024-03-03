#include <stdio.h>
#include <stdlib.h>
#include "STRING.h"
/************************************
   Author :Nada Ehab
   project name:string library
   JUNE 3,2023   6:25 pm

************************************/

void *mymemset(void *str,unsigned char c ,int n)
{
    unsigned char*pt=str;
    if(NULL==pt)
    {printf("there is null pointer");}

    else
    {
        while(n--)
        {
            *pt++=c;
        }
    }
return str;}
/***********************************************************************************************/
void *memcpy(void *dest, const void * src, int n)
{
    char *cast_dest=dest;
    char *cast_src=src;
    if(NULL==dest || NULL==src ){return NULL;}
    for(int i=0;i<n;i++)
    {
        cast_dest[i]=cast_src[i];
    }



return dest;}
/***********************************************************************************************************************************/
void *memchr(const void *str, int c, int n)
{
  unsigned char *cast_str=(unsigned char *)str;


  for(int i=0;i<n;i++)
  {
      if(cast_str[i]==c)
      {
          return cast_str;
      }


 }
return NULL;}
/************************************************************************************************************************************/
int memcmp(const void *str1, const void *str2, int n)
{

    unsigned char *CASTstr1=(unsigned char *)str1;
    unsigned char *CASTstr2=(unsigned char *)str2;
    int retv=0;
    for(int i=0;i<n ;i++)
    {
        if(CASTstr1[i]==CASTstr2[i])
        {
            CASTstr1++;
        }
        else if(CASTstr1[i] > CASTstr2[i])
        {
            retv=1;
        }
        else if(CASTstr1[i] < CASTstr2[i])
        {
            retv=-1;
        }
    }
return retv;
}
/**********************************************************************************************************************************/
char *strcat(char *dest, const char *src)
{
     int i=0,j=0;
   while (dest[i]!='\0')
   {
       i++;
   }
  while (src[j]!='\0')
  {
      dest[i]=src[j];
      i++;
      j++;
  }
  dest[i]='\0';
return dest;}
/*********************************************************************************************************************************/
char *strncat(char *dest, const char *src, int n)
{
      while (*dest!='\0')
      {

      dest++;
      }


    while (*src && n--)
       {
          *dest++ = *src++;
       }

       *dest= '\0';

       return dest;
}
/*********************************************************************************************************************************************/
int strcmp(const char *str1, const char *str2)
{

    int returnValue=0;
    while(*str1!='\0'&&*str2!='\0')
    {
        if(*str1==*str2)
        {
            str1++;
            str2++;

        }

        else if(*str1>*str2)
        {
            str1++;
            str2++;
            returnValue=1;
        }
        else if (*str1<*str2)
            returnValue=-1;
    }


return returnValue;
}
/*********************************************************************************************************************************/
char *strcpy(char *dest, const char *src)
{
     int i=0;
   while(src[i]!='\0')
   {
       dest[i]=src[i];
       i++;
   }
   dest[i]='\0';

return dest;}
/*******************************************************************************************************************************/
char *strncpy(char *dest, const char *src, int n)
{
    unsigned char *castdest=dest;
    unsigned char *castsrc=src;
    if(NULL==castdest||NULL==castsrc){return NULL;}
    for(int i=0;i<n;i++)
    {
        castdest[i]=castsrc[i];
    }

return dest;}
/******************************************************************************************************************************/
int mystrcspn(const char *str1, const char *str2)
{
   int len1=strlen(str1);
   int len2=strlen(str2);
   int index=0;
   for(int i=0;i<len1;i++ )
   {
       for(int j=0;j<len2;j++)
       {
           if(str1[i]==str2[j])
           {
               index=i;
               break;
           }
       }
   }


return (len1-index);}
/****************************************************************************************************************************/
int mystrlen(const char *str)
 {
     unsigned char *cast_str=str;
    int index=0;

    while(cast_str[index]!='\0')
    {
        index++;
    }

 return index;}
 /*******************************************************************************************************************************/
 char *strpbrk(const char *str1, const char *str2)
{
    int i=0,j=0;
    while(str1[i]!='\0')
    {

   while(str2[j]!='\0')
   {
       if(str1[i]==str2[j])
       {
           return str1[i];
           break;
       }


   }
   i++;
   j=0;
  }

return NULL;}
/*******************************************************************************************************************************/
char *strchr(const char *str, int c)
{
   while(*str!='\0')
   {
       if(*str==c)
       {
            return (char*)str;
       }
  str++;}


 return NULL;}
 /***************************************************************************************************************************/
 char *strrchr(const char *str, int c)
 {
     const char* lastmatch=NULL;

    while (*str != '\0')
        {
        if (*str == c)
        {
            lastmatch = str;
        }

        str++;}

         if (*str == c) {
        lastmatch = str;
    }



    return (char*)lastmatch;
}
/*****************************************************************************************************************/
int strspn(const char* str1, const char* str2)
{
    int i = 0;

    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            break;
        }
        i++;
    }

    return i;
}
/******************************************************************************************************************/
char *strstr(const char *haystack, const char *needle)
{
     const unsigned char* h = (const unsigned char*)haystack;
    const unsigned char* n = (const unsigned char*)needle;

    int h_len = mystrlen(h);
    int n_len = mystrlen(n);

    for (int i = 0; i < h_len; i++)
        {
           for (int j = 0; j < n_len; j++)
          {
            if (h[i + j] != n[j])
                break;
            if (j == n_len - 1)
            {
                return h[i];
            }
        }
    }

    return NULL;
}
/**************************************************************************************************************************/
int strxfrm(char *dest, const char *src, int n)
{
    int i=0;
   while(src[i]!='\0'&& i<n)
   {
       dest[i]=src[i];
       i++;
   }
   dest[i]='\0';

return i++;}
/*************************************************************************************************************/
char *strtok(char *str, const char *delim)
{
    char *token=NULL;

   if (str != NULL)
        {
            token = str;
        }
      else
        {
             if (token == NULL){return NULL;}
        }
        char *result = token;

        token = strpbrk(token, delim);

       if (token != NULL)
    {
        *token = '\0';
        token++;
    }

    return result;}
