/**
 * C program to print box number pattern with plus in center
 */

#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if ((i==1||i==n) && (j==1 || j==n)) printf("0");
            else if (i==1 ||i==n || j==1 || j==n) printf("1");
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}
