#include <stdio.h>

int main() {
    int t;

    printf("enter a value: ");
    scanf("%d", &t);

    (t % 2 == 0) ? printf("even") : printf("odd");

    return 0;
}
