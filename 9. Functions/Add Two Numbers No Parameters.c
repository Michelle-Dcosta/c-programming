#include <stdio.h>
int add(void);
int main() {
    int c=add();
    printf("%d",c);
}
int add()
{
    int a=5,b=6;
    return a+b;
}
/*
Sample Output:
11
*/
