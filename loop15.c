#include <stdio.h>

int main()
{
    int n,product=1;
    printf("Enter a number:");
    scanf("%d",&n);
    // for (int i=n;n>0;i++){
    //     int m=n%10;
    //     product=product*m;
    //     n/=10;
    // }
    // -----WHILE LOOP----
    while(n>0){
        int m=n%10;
        product=product*m;
        n/=10;
    }
    printf("Product of digits=%d",product);
    return 0;
}
