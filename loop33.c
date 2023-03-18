#include <stdio.h>
int main(){
    int i,sum,end;
    printf("Enter a limit:");
    scanf("%d",&end);
    for (int j=1;j<=end;j++){
        sum=0;
    for (int i=1;i<=j/2;i++){
        if (j%i==0){
            sum=sum+i;
        }
    }
    if (sum==j){
        printf("%d,",j);
    }
    }
    return 0;
}
