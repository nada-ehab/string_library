#include "STRING.h"
#include <stddef.h>
int main()
{
     printf("using memset\n\n");

    char n[20]="nada ehab";
    printf("%s\n",n);
    mymemset(n,'y',2);
     printf("%s\n\n",n);
     printf("***************************************************************\n");
/******************************************************************************/
     printf("using memcpy\n\n");

    char src[]="codeblocks";
     char dest[100];
     printf("src:%s\n",src);
     printf("dest:%s\n",dest);
     memcpy(dest,src,100);
     printf("src after memecpy:%s\n",src);
     printf("dest after memcpy:%s\n\n",dest);
     printf("***************************************************************\n");
/*************************************************************************************/
       printf("using memchr\n\n");

     char T[]="this function is.memchr.function";  //memchr
     char *ret= memchr(T,'m',100);
    printf(" this is %s \n\n",ret);
    printf("***************************************************************\n");

/*************************************************************************************/
    printf("using memcmp\n\n");
   char na[15]="abc";     //memcmp
   char s[15]="ABC";
   int ret2= memcmp(na,s,15);
   if(ret2 > 0) {
      printf("s is less than na \n");
   } else if(ret2 < 0) {
      printf("na is less than s \n");
   } else {
      printf("na is equal to s \n\n");
   }
    printf("***************************************************************\n");

/************************************************************************************/
      printf("using strcat\n\n");

     char array[]="the source";
      char arr2[]="the destination ";
      strcat(arr2,array);
      printf("the destination after strcat  %s \n\n",arr2);
    printf("***************************************************************\n");

/*************************************************************************************/

    printf("using strncat\n\n");

     char array2[]="the source";
      char arr4[]="the destination ";
      strncat(arr2,array,3);
      printf("the destination after strncat  %s \n\n",arr2);
    printf("***************************************************************\n");

/*************************************************************************************/
   printf("using strchr\n\n");

   char arr[100]="using .strchr.mm ";
    char *p= strchr(arr,'.');
     printf("after the first is %s\n",p);
  printf("***************************************************************\n");
/************************************************************************************/

printf("using strcmp\n\n");
   char NA[15]="abc";
   char S[15]="ABC";
   int retV= memcmp(NA,S,15);
   if(retV > 0) {
      printf("S is less than NA \n");
   } else if(retV < 0) {
      printf("NA is less than S \n");
   } else {
      printf("NA is equal to S \n\n");
   }
    printf("***************************************************************\n");

/******************************************************************************/
    printf("using strcpy\n\n");

     char M[]="THE FIRST PROJECT";
      char N[100];
      strcpy(N,M);
      printf("%s\n\n",N);

      printf("***************************************************************\n");
/************************************************************************************/
    printf("using strncpy\n\n");

    char ptr[]="second project";
      char destt[50];
      strncpy(destt,ptr,9);
      printf("%s\n\n",destt);

  printf("***************************************************************\n");
/************************************************************************************/
  printf("using strcspn\n\n");

   int len;
   const char str1[] = "ABCDE60910";
   const char str2[] = "013";

   len = strcspn(str1, str2);

   printf("First matched character is at %d\n\n", len + 1);
/************************************************************************************/
 printf("***************************************************************\n");
   printf("using strpbrk\n\n");

     char ptrr[100]="mariam";
     char d[9]="mahmoud";
    char va= strpbrk(ptrr,d);
    printf("the first matching character is |%c|\n\n",va);

printf("***************************************************************\n");
/************************************************************************************/
 printf("using strrchr\n\n");

   char ar[100]="using .strrchr.mm ";
    char *v= strrchr(ar,'.');
     printf("the last matching is %s\n\n",v);
  printf("***************************************************************\n");
/************************************************************************************/
  printf("using strspn\n\n");

  int l;
   const char st1[] = "ABCDEFG019874";
   const char st2[] = "ABCDEFG";

   l= strspn(st1, st2);

   printf("Length of initial segment matching %d\n", l );

   printf("***************************************************************\n");
/************************************************************************************/
  /* printf("using strstr\n\n");



    char m[100]="function of string library ";
    char neddle[20]="string";
    char*o=strstr(m,neddle);
    printf("the substring is %s",o);*/

    printf("***************************************************************\n");
/************************************************************************************/


    printf("using strtok\n\n");

/*char str[80] = "This is - www.tutorialspoint.com - website";
   const char su[2] = "-";
   char *token;


   token = strtok(str, su);

   while( token != NULL ) {
      printf( " %s\n", token );

      token = strtok(NULL, su);
   }

   printf( " %s\n", token );*/
    printf("***************************************************************\n");
/************************************************************************************/
    printf("using strxfrm\n\n");

   char source[20]="copyt his function";
   char destination [20];
   int LEN= strxfrm(destination, source, 20);

   printf("Length of string |%s| is: |%d|\n\n", destination, LEN);

  printf("***************************************************************\n");


















return 0;}
