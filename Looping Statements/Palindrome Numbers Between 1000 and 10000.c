#include <stdio.h>

int main() {
    int i, n, r;

    for(i = 1000; i <= 10000; i++) {
        r = 0;
        n = i;

        // Reverse number
        while(n > 0) {
            r = r * 10 + n % 10;
            n = n / 10;
        }

        if(r == i)
            printf("%d ", i);
    }

    return 0;
}
