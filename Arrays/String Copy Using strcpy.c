#include <stdio.h>
#include <string.h>
int main() {
    char a[]="abcd";
    char b[100];
    strcpy(b,a);
    printf("%s",b);
}
/*
Sample Output:
abcd
*/
