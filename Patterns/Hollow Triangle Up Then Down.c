#include <stdio.h>
int main() {
    int n,o;
    printf("enter the no of rows and column:");
    scanf("%d %d",&n,&o);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        printf("*");
        for (int k=1;k<=(n-i);k++)
        printf("  ");
        for(int j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        printf("*");
        for (int k=1;k<=(n-i);k++)
        printf("  ");
        for(int j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
}
/*
Sample Output:
enter the no of rows and column:4 4
*      *
**    **
***  ***
********
***  ***
**    **
*      *
*/
