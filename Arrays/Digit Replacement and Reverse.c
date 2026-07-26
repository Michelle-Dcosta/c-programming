int main(){
    int n=1004,r,sum=0;
    while(n>0){
       r=n%10;
       if(r==0)
        sum=sum*10+5;
        else
        sum=sum*10+n%10;
        n/=10;
    }
    n=0;
    while(sum>0){
    n=n*10+sum%10;
    sum/=10;}
    printf("%d",n);
}
/*
Sample Output:
1554
*/
