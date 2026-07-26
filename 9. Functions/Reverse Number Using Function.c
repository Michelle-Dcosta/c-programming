#include <stdio.h>
int rev(int);
int main() {
    int a=123;
    int c=rev(a);
    printf("%d",c);
}
int rev(int a)
{ int r=0;
    while(a>0)
   {  r=r*10+a%10;
      a=a/10;
   }
   return r;
}
/*
Sample Output:
reversed number using fn: 321
*/
