#include <stdio.h>

int main() {
    int f = 0, s = 1, n = 22, t;

    printf("%d %d ", f, s);

    for(int i = 1; i <= n - 2; i++) {
        t = f + s;
        f = s;
        s = t;
        printf("%d ", t);
    }

    return 0;
}
