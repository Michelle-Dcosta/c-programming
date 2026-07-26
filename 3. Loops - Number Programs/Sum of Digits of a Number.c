#include <stdio.h>

int main() {
    int a, sum = 0;

    printf("enter value: ");
    scanf("%d", &a);

    // Extract digits and add
    while(a > 0) {
        sum += a % 10;
        a = a / 10;
    }

    printf("sum of digits is %d", sum);

    return 0;
}
