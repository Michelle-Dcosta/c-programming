int main(){
    int a1[]={3, 4, 5},a2[]={4, 4, 5},k=10,x,ans=0;
    int n=sizeof(a1)/sizeof(a1[0]);
    for(int i=0;i<n;i++){
    x=(k/a1[i])*a2[i];
    if(x>ans)
    ans=x;}
    printf("%d",ans);
}
/*
Sample Output:
12
*/
