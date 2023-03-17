#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i=n;n>0;i++){
        int m=n%10;
        sum=sum+m;
        n/=10;
    }
    // -----WHILE LOOP----
    while(n>0){
        int m=n%10;
        sum=sum+m;
        n/=10;
    }
    printf("Sum of digits=%d",sum);
    return 0;
}
