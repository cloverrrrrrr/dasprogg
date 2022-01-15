#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	
  FILE *files;
  int i;
  char alinea[1000];
  
  files = fopen("files.txt", "w");
  
  for (i = 0; i < 3; ++i)
  {
    printf("alinea ke %d\n", i + 1);
    printf("Masukkan alinea: "); 
	scanf("%[^\n]%*c", alinea);
    printf("\n");  
    if (alinea == NULL) 
    { 
      break; 
	} 
    fprintf(files, "%s\t%s\n", alinea);
  }
  fclose(files);
  return 0;
}
