#include <stdio.h>
int add(int,int);
int main() {
    int a=5,b=6;
    int c=add(a,b);
    printf("%d",c);
}
int add(int x,int y)
{
    int sum =x+y;
    return sum;
}
/*
Sample Output:
11
*/
