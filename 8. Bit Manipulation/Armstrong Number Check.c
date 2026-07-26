#include <stdio.h>
#include <math.h>
int main() {
   int a,sum=0,m=0,s,n;
   printf("enter value: ");
   scanf("%d",&a);
   s=n=a;
   while(a>0)
   {
       m++;
      a=a/10;
   }
   while(s>0)
   {
      sum+=pow((s%10),m);
      s=s/10;
   }
   if (sum==n)
   printf("amstrong no ");
   else
   printf("not a amstrong no ");
}
/*
Sample Output:
enter value: 153
amstrong no 
enter value: 152
not a amstrong no 
*/
