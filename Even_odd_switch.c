#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n%2){
    case 0:
    printf("Even");
    case 1:
    printf("Odd");
    }
    return 0;
}
