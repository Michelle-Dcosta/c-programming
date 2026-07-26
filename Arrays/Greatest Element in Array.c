int main() {
    int n;
    printf("elements no:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("the greatest of elements of array is:");
    int s=array[0];
    for(int i=1;i<n;i++){
    if(s<=array[i])
    s=array[i];}
    printf("%d",s);
}
/*
Sample Output:
elements no:8
3 5 6 7 8 9 2 1
the greatest of elements of array is:9
*/
