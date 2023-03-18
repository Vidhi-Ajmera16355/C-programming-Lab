#include <stdio.h>
int main(){
    int num,result=0,temp,rem;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        rem=temp%10;
        result+=rem*rem*rem;
        temp/=10;
    }
    if (result==num){
        printf("Armstrong");
    }
    else printf("Not Armstrong");
    return 0;
}
