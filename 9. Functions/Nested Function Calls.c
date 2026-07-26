#include <stdio.h>
void divya(void);
void ramya(void);
int main() {
    printf(" monkey is in jungle\n");
    divya();
    printf(" monkey is back in jungle\n");
}
void ramya(){
    printf(" he had tea with ramya\n");
}
void divya(){
    printf(" divya is making coffee\n");
    ramya();
    printf(" he had coffee with divya\n");
}
/*
Sample Output:
 monkey is in jungle
 divya is making coffee
 he had tea with ramya
 he had coffee with divya
 monkey is back in jungle
*/
