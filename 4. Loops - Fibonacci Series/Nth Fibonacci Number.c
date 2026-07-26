#include <stdio.h>

int main() {
    int f = 0, s = 1, n, t;

    printf("enter a value: ");
    scanf("%d", &n);

    if(n == 0)
        printf("0th fibonacci number is %d", f);
    else if(n == 1)
        printf("1st fibonacci number is %d", s);
    else {
        for(int i = 1; i <= n - 2; i++) {
            t = f + s;
            f = s;
            s = t;
        }
        printf("%dth fibonacci number is %d", n, t);
    }

    return 0;
}
