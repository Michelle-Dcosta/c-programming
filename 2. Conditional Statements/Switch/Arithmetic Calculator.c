#include <stdio.h>
int main() {
int a,b;
char n;
printf("enter 2 value and a character: ");
scanf("%d %d %c",&a,&b,&n);
switch(n)
{
case '+':
 printf("sum is %d",a+b);
 break;
 case '-':
printf("diff is %d",a-b);
 break;
case '*':
printf("mul is %d",a*b);
 break;
case '/':
printf("div is %d",a/b);
 break;
 default:
printf("invalid character");
}
}