int main() {
    int cars[]={2375, 7682, 2325, 2352};
    int fine[]={250, 500, 350, 200};
    int date=12;
    int tf=0;
    int n=sizeof(cars)/sizeof(cars[0]);
    printf("output:");
    for(int i=0;i<n;i++)
    if (date%2==0&&cars[i]%2!=0)
     tf+=fine[i];
    else if(date%2!=0&&cars[i]%2==0)
     tf+=fine[i];
     printf("%d",tf);
}
/*
Sample Output:
output:600
*/
