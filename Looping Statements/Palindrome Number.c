#include <stdio.h>

int main() {
    int a, n, r = 0;

    printf("enter value: ");
    scanf("%d", &a);

    n = a;   // store original number

    while(a > 0) {
        r = r * 10 + a % 10;
        a = a / 10;
    }

    if(n == r)
        printf("number is a palindrome");
    else
        printf("number is not palindrome");

    return 0;
}
