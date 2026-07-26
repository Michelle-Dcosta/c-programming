#include <stdio.h>
//switch statement for days of a week
int main() {
int a;
printf("enter a value between 1-7: ");
scanf("%d",&a);
switch(a)
{
case 1:
printf("MONDAY");
break;
case 2:
 printf("TUESDAY");
 break;
 case 3:
 printf("WEDNESDAY");
break;
case 4:
 printf("THURSDAY");
break;
case 5:
 printf("FRIDAY");
break;
case 6:
printf("SATURDAY");
 break;
case 7:
 printf("SUNDAY");
 break;
}
}