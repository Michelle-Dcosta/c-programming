#include <stdio.h>
int main() {
    int array[5];
    printf("size of array=%d bytes\n",sizeof(array));
    printf("size of element=%d bytes\n",sizeof(array[0]));
    printf("no of elements=%d",sizeof(array)/sizeof(array[0]));
}
/*
Sample Output:
size of array=20 bytes
size of element=4 bytes
no of elements=5 
*/
