#include <stdio.h>

int main()
{
    int n,rem,sum=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    for (int i=n;n>0;i++){
        rem=n%10;
        sum=sum*10+rem;
        n/=10;
    }
    if (temp==sum) printf("Palindrome number");
    else printf("Not a Palindrome number");
    return 0;
}
