#include <stdio.h>
int main() {
    int n,o;
    printf("enter the no of rows and column:");
    scanf("%d %d",&n,&o);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<o;j++)
        {
        printf("%d",j+1);
        }
        printf("\n");
    }
}
/*
Sample Output:
enter the no of rows and column:3 4
1234
1234
1234
*/
