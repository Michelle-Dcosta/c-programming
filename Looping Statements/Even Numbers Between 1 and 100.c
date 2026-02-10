#include <stdio.h>

int main() {
    printf("even numbers between 1-100 are: ");

    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0)
            printf("%d, ", i);
    }

    return 0;
}
