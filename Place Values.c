int main() {
int n;
printf("enter a value: ");
scanf("%d",&n);
printf( "%d h \n%d f \n%d t \n%d ones",n/100,n%100/50,n%50/10,n%10);
}