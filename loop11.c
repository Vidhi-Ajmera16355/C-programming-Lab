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
    printf("First digit %d and Last digit %d",firstdigit,lastdigit);
    return 0;
}
