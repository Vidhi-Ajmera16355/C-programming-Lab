#include <stdio.h>
int main(){
    int i,num,sum=0;
    printf("Enter a number to check whether a perfect number or not:");
    scanf("%d",&num);
    for (int i=1;i<=num/2;i++){
        if (num%i==0){
            sum=sum+i;
        }
    }
    if (sum==num && num>0){
        printf("Perfect Number.");
    }
    else {
        printf("Not a Perfect number.");
    }
    return 0;
}
