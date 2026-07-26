#include <stdio.h>
int main() {
   int n,r,k,count=0;
   printf("enter no and place value: ");
   scanf("%d %d",&n,&k);
   while(n>0)
   {
       r=n%2;
       count++;
       if(count==k)
       break;
       n=n/2;
   }
   if (r==1)
   printf("setbit");
   else
   printf("unsetbit");
}
/*
Sample Output:
enter no and place value: 21 3
setbit
enter no and place value: 21 2
unsetbit
*/
