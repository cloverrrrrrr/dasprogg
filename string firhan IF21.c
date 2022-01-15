#include <stdio.h>
#include <string.h>

int strlength(char str[]){
    printf("my strlen\n");
    int len=0;
    char ch= str[len];
    while(ch!='\0'){
        len++;
        ch=str[len];
    }
    return len;
}
int main () {
puts("masukkan karakter maksimal 100\n");
   char str1[100];
   char str2[100];
   char str3[100];
   int  len ;
   int compare ;
   
printf("input string 1: ");
scanf("%s", str1);

printf("input string 2: ");
scanf("%s", str2);


printf("\n");

   strcpy(str2, str1);
   printf("strcpy(str2, str1):  %s\n", str2 );

   strcat( str1, str2);
   printf("strcat(str1, str2):  %s\n", str1 );

   len = strlen(str1);
   printf("strlen(str1):  %d\n", len );
   len = strlength(str2);
   printf("strlenght(str2) :  %d\n", len );
   
   compare = strcmp(str1,str2);
	printf ("%d \n",compare);
	printf("\n");
	

if(str1<=str2)
	  printf("str1 < str2\n");
	else
	   if(str1>=str2)
	        printf("str1 > str2\n");	      
	   else 
	      printf("str1 = str2");

   return 0;
}
