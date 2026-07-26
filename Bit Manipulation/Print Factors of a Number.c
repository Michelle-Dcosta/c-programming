#include <stdio.h>
int main() {
   int a;
   printf("enter value: ");
   scanf("%d",&a);
   printf("factorial of %d :",a);
   for(int i=1;i<=a;i++)
   {
       if(a%i==0)
       printf("%d ",i);
   }
}
/*
Sample Output:
enter value: 12
factorial of 12 :1 2 3 4 6 12
*/
