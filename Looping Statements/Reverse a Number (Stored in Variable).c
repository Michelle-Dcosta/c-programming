#include <stdio.h>

int main() {
    int a, r = 0;

    printf("enter value: ");
    scanf("%d", &a);

    // Reverse number logic
    while(a > 0) {
        r = r * 10 + a % 10;
        a = a / 10;
    }

    printf("%d", r);

    return 0;
}
