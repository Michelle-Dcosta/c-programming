void sod(int);
int main() {
    int a=123;
    sod(a);
}
void sod(int b)
{
    int sum=0;
    while(b>0)
   {
      sum+=(b%10);
      b=b/10;
   }
    printf("%d",sum);
}
/*
Sample Output:
6
*/
