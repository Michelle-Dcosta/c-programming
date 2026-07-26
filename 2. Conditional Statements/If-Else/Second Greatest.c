#include <stdio.h>
int main() {
int a,b,c;
printf("enter a value: ");
scanf("%d %d %d",&a,&b,&c);
if((a>b && a<c)||(a<b && a>c))
printf("a is sec greatest");
else if((b>a && b<c)||(b<a && b>c))
printf("b is sec greatest");
else 
printf("c is sec greatest");
}