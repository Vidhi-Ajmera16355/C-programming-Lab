/**
 * C program to print box number pattern with plus in center
 */

#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    int centerrow=(n+1)/2;
    for (i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if ( (centerrow==i) ||(centerrow==j) ) printf("0");
            else if ((n%2==0 && centerrow+1==i) || (n%2==0 && centerrow+1==i)) printf("0");
            else printf("1");
        }
        printf("\n");
    }
    return 0;
}
