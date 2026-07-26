int main() {
    int n;
    printf("elements no:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("the elements of array are:");
    for(int i=0;i<n;i++)
    printf("%d ",array[i]);
}
/*
Sample Output:
elements no:3
4 7 5
the elements of array are:4 7 5
*/
