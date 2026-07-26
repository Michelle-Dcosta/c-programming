#include <stdio.h>

int main() {
    int a = 5, b = 3, ans = 1;

    for(int i = 1; i <= b; i++)
        ans *= a;

    printf("%d", ans);

    return 0;
}
