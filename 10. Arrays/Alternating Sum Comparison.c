int main() {
    int a1[]={2, 1, 2};
    int a2[]={3, 2, 1};
    int n=sizeof(a1)/sizeof(a1[0]);
    printf("output:");
    int sum1=a1[0],sum2=a2[0];
    for(int i=1;i<n;i++){
        sum1+=(i%2==0)?a1[i]:a2[i];
        sum2+=(i%2==0)?a2[i]:a1[i];}
    (sum1<=sum2)?printf("%d",sum1):printf("%d",sum2);
}
/*
Sample Output:
output:5
*/
