#include<stdio.h>
int main()
{
  FILE *fp;
  char c[100];
  fp = fopen("gopal.txt","w");
  fputs("a", fp);
  fputs("hello", fp);
  fclose(fp);
  return 0;
}