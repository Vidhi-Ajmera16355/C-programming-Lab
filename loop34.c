#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int rem,result=0,fact=1;
    int q=n;
    while (q!=0){
        rem=q%10;
        for (int i=1;i<=rem;i++){
            fact=fact*i;
        }
        result=result+fact;
        fact=1;
        q=q/10;
    }
    if (n==result){
    printf("Strong");}
    else 
    printf("Not Strong");
    return 0;
}
