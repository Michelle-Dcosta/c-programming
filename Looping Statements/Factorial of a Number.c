#include <stdio.h>

int main() {
    int a, fact = 1;

    printf("enter value: ");
    scanf("%d", &a);

    // Calculate factorial
    for(int i = 1; i <= a; i++)
        fact = fact * i;

    printf("factorial of %d is %d", a, fact);

    return 0;
}
