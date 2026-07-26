int main() {
    int n,s=0;
    printf("elements no:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("the sum of elements of array is:");
    for(int i=0;i<n;i++)
    s+=array[i];
    printf("%d",s);
}
/*
Sample Output:
elements no:6
2 3 7 9 8 6
the sum of elements of array is:35
*/
