#include <stdio.h>
int main() {
   int n,r,count=0;
   printf("enter value: ");
   scanf("%d",&n);
   while(n>0)
   {
       r=n%2;
       if (r==1)
       count++;
       n=n/2;
   }
   printf("%d",count);
}
/*
Sample Output:
enter value: 21
3
enter value: 12
2
*/
