#include <stdio.h>

int main() {
    int t, s = 0;

    printf("enter a value: ");
    scanf("%d", &t);

    // Reverse the number
    while(t > 0) {
        s = s * 10 + t % 10;
        t = t / 10;
    }

    // Sum of first two digits
    printf("sum of first 2 digits is %d", (s % 10) + (s / 10 % 10));

    return 0;
}
