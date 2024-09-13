#include<stdio.h>
union book{
int num;
char name[20];
float price;
};
int main()
{
  union book hp;
  hp.num=251104;
  hp.price=1.0;
  strcpy(hp.name,"Harry potter");
  printf("book number is %d\n",hp.num);
  printf("book name is %s\n",hp.name);
  printf("book price is %f\n",hp.price);
}