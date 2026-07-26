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
    for(i=0;i<n;i++){
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
elements of array is:3 5 7 9 0
value:4
element not found
elements no:5
elements of array is:3 5 7 9 0
value:7
index value: 2
*/
