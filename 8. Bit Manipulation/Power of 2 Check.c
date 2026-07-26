#include <stdio.h>
int main() {
   int n;
   printf("enter  value: ");
   scanf("%d",&n);
   if ((n&(n-1))==0)
   printf("power of 2");
   else
   printf("not a power of 2");
}
/*
Sample Output:
enter  value: 16
power of 2
enter  value: 7
not a power of 2
*/
