#include <stdio.h>
int main() {
   int n,r,k,count=0;
   printf("enter 2 value: ");
   scanf("%d %d",&n,&k);
   if (((n>>(k-1))&1)==1)
   printf("setbit");
   else
   printf("unsetbit");
}
/*
Sample Output:
enter 2 value: 21 3
setbit
enter 2 value: 12 2
unsetbit
*/
