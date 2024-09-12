#include <stdio.h>
int add(int a, int b);
int main() {
int num1, num2, sum, prod, dif, div;
printf("enter two numbers: ");
scanf("%d %d", &num1,&num2);
sum=num1+num2;
prod=num1*num2;
dif=num1-num2;
div=num1/num2;
printf("Sum=%d\n",sum);
printf("differance=%d\n",dif);
printf("product=%d\n",prod);
printf("division=%d\n",div);
}
int add(int a, int b){
return a+b;
return a-b;
return a*b;
return a%b; 
}