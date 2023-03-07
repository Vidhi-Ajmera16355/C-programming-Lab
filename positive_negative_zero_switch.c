#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n>0){
        case 1 :
        printf("Positive number");
        break;
        case 0:
            switch(n<0){
            case 1:
            printf("Negative number");
            break;
            case 0:
            printf("Zero");
            
        }
    }
    return 0;
}
