#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  FILE *fp1;
  int id1;

  if ((fp1 = fopen ("dosya1.txt", "w")) == NULL) 
  {
      printf("Dosya a�ma hatas�!");
      exit(1);
  }

  for (id1=0; id1<10; id1++) 
  fputc ('a', fp1);
  fclose(fp1);

  if ((fp1 = fopen ("dosya1.txt", "r")) == NULL) 
  {
      printf("Dosya a�ma hatas�!");
      exit(1);
  }

  for (id1=0; id1<10; id1++) 
  printf("%c", fgetc(fp1));
  fclose(fp1);
}
