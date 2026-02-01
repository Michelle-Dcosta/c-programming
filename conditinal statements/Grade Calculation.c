#include <stdio.h>
int main() {
int a;
printf("enter marks percentage ");
scanf("%d",&a);
if (a>=90 && a<=100)
 printf("a grade");
else if(a>=75 && a<=89)
 printf("b grade");
else if(a>=60 && a<=74)
 printf("c grade");
else
printf("fail");
}