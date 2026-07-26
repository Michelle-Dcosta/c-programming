#include <stdio.h>
int main() {
   int a,sum=0;
   printf("enter value: ");
   scanf("%d",&a);
   printf("factorial of %d :",a);
   for(int i=1;i<=a;i++)
   {
       if(a%i==0){
       printf("%d ",i);
       sum+=i;}
   }
   if(sum==a*2)
   printf("\nit is perfect no");
   else
   printf("\nit is not a perfect no");
}
/*
Sample Output:
enter value: 6
factorial of 6 :1 2 3 6 
it is perfect no
enter value: 9
factorial of 9 :1 3 9 
it is not a perfect no
*/
