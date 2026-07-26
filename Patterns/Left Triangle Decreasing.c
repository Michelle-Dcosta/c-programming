#include <stdio.h>
int main() {
    int n,o;
    printf("enter the no of rows and column:");
    scanf("%d %d",&n,&o);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
}
/*
Sample Output:
enter the no of rows and column:4 4
****
***
**
*
*/
