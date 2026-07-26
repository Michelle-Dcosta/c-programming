#include <stdio.h>
int main()
{
  int f=0,s=1,a,b,t,u;
  printf("enter a value :");
  scanf("%d %d",&a,&b);
  if(a==1)
   a=0;
   else if(b==1)
   b=0;
  else if(a==2)
  a=1;
  else if(b==2)
  b=1;
  else
  {
   for(int i=1;i<=(a-2);i++)
   {
       t=f+s;
       f=s;
       s=t;
   }
   a=t;
   f=0;
   s=1;
   for(int i=1;i<=(b-2);i++)
   {
       u=f+s;
       f=s;
       s=u;
   }}
   b=u;
   printf("%d",a+b);
}
/*
Sample Output:
enter a value :3 4
3
*/
