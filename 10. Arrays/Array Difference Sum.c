int main() {
    int a1[]={4, 8, 1, 3, 7};
    int a2[]={7, 4, 3, 1};
    int n=sizeof(a1)/sizeof(a1[0]);
    printf("output:");
    int sum1=a1[0],sum2=a2[0];
    for(int i=1;i<n;i++)
        sum1+=a1[i];
    for(int i=1;i<n-1;i++)
        sum2+=a2[i];
    printf("%d",sum1-sum2);
}
/*
Alternate solution:

int main() {
    int a1[]={4, 8, 1, 3, 7};
    int a2[]={7, 4, 3, 1};
    int n=sizeof(a1)/sizeof(a1[0]);
    printf("output:");
    int sum1=a1[n-1],sum2=0;
    for(int i=0;i<n-1;i++){
        sum1+=a1[i];
        sum2+=a2[i];}
    printf("%d",sum1-sum2);
}

Sample Output:
output:8
*/
