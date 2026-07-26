#include <stdio.h>
int main() {
    int n,o;
    printf("enter the no of rows and column:");
    scanf("%d %d",&n,&o);
    for(int i=1;i<=n;i++)
    {
        for (int k=1;k<i;k++)
        printf(" ");
        printf("%d",i);
        for (int k=1;k<=(n-i);k++)
        printf(" ");
        for (int k=1;k<=(n-i);k++)
        printf(" ");
        if(i!=n)
        printf("%d",i);
        printf("\n");
    }
    for(int i=(n-1);i>=1;i--)
    {
        for (int k=1;k<i;k++)
        printf(" ");
        printf("%d",i);
        for (int k=1;k<=(n-i);k++)
        printf(" ");
        for (int k=1;k<=(n-i);k++)
        printf(" ");
        if(i!=n)
        printf("%d",i);
        printf("\n");
    }
}
/*
Sample Output:
enter the no of rows and column:4 4
1      1
 2    2
  3  3
   4
  3  3
 2    2
1      1
*/
