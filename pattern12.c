

#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    int k=1;
    for (i=1;i<=n;i++){
        for(j=i;j<i+n;j++){
           printf("%d ",k);
           k++;
        }
        printf("\n");
    }
    return 0;
}
