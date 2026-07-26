#include <stdio.h>

int main() {
    int a, r;

    printf("enter value: ");
    scanf("%d", &a);

    // Print digits in reverse order
    while(a > 0) {
        r = a % 10;
        printf("%d", r);
        a = a / 10;
    }

    return 0;
}
