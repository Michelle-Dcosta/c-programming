#include <stdio.h>
void pot(int);
int main() {
    int a=16;
    pot(a);
}
void pot(int a){
    int r;
for(int i=1;i<=a;i*=2)
{if (i==a)
r=1;}
if (r==1)
printf("yes power of 2");
else
printf("not power of 2"); 
 }
/*
Sample Output:
yes power of 2
*/
