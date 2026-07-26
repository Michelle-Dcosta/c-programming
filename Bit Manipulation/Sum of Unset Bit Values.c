#include <stdio.h>
#include <math.h>
int main() {
   int n,r,k=0,count=0;
   printf("enter value: ");
   scanf("%d",&n);
   while(n>0)
   {
       r=n%2;
       count++;
       if (r==0)
       k+=pow(2,count-1);
       n=n/2;
   }
   printf("%d",k);
}
/*
Sample Output:
enter value: 17
14
*/
