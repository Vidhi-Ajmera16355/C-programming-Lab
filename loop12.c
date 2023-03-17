#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int lastdigit = n % 10;
    for (int i=n;n>=10;i++){
    n=n/10;
    }
    int firstdigit=n;
    int sum=firstdigit+lastdigit;
    printf(" Sum of First digit %d and Last digit %d = %d",firstdigit,lastdigit,sum);
    return 0;
}
