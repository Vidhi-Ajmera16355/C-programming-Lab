#include <stdio.h>

int main()
{
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while (n>0){
        count++;
        n=n/10;
    }
    // ----------FOR LOOP--------
    for (int i=n;i>0;i++){
        count++;
        n=n/10;
    }
    printf("%d",count);
    return 0;
}
