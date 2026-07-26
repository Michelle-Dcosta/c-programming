#include <stdio.h>

int main() {
    int a, sum = 0;

    printf("enter value: ");
    scanf("%d", &a);

    // Calculate sum
    for(int i = 1; i <= a; i++)
        sum = sum + i;

    printf("sum of %d numbers is %d", a, sum);

    return 0;
}
