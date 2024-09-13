#include<stdio.h>
int main()
{
  FILE *fp;
  char c[100];
  fp = fopen("gopal.txt","r");
  fgets(c,5,fp);
  printf("character is %s", c);
  fclose(fp);
  return 0;
}