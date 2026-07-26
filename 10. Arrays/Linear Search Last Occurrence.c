int main() {
    int n,s,i,f=0;
    printf("elements no:");
    scanf("%d",&n);
    int array[n];
    printf("elements of array is:");
    for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("value:");
    scanf("%d",&s);
    for(i=n-1;i>=0;i--){
    if(s==array[i]){
    f=1;
    printf("index value: %d",i);
    break;}}
    if(f==0)
    printf("element not found");
}
/*
Sample Output:
elements no:5
elements of array is:7 2 5 7 8
value:7
index value: 3
*/
