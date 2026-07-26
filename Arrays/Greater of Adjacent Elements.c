int main() {
    int n;
    printf("elements no:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("output:");
    for(int i=1;i<n;i++){
    if(array[i]>array[i-1])
     printf("%d ",array[i]);
    else
     printf("%d ",array[i-1]);}
}
/*
Sample Output:
elements no:5
1 2 3 4 5
output:2 3 4 5 
*/
