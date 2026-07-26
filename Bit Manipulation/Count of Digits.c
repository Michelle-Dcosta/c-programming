#include <stdio.h>
int main() {
   int a,m=0;
   printf("enter value: ");
   scanf("%d",&a);
   while(a>0)
   {
       m++;
      a=a/10;
   }
   printf("num of digits is %d",m);
}
/*
Sample Output:
enter value: 1234
num of digits is 4
*/
