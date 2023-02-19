#include <stdio.h>
int main() 
{ 
    int n1,n2,n3,n4,max;
    printf("Enter value of a :");
    scanf("%d",&n1);
    printf("Enter value of b :");
    scanf("%d",&n2);
    printf("Enter value of c :");
    scanf("%d",&n3);
    printf("Enter value of d :");
    scanf("%d",&n4);

    n1>n2 && n1>n3 && n1>n4 ? printf("%d",n1):
    n2>n1 && n2>n3 && n2>n4 ? printf("%d",n2):
    n3>n1 && n3>n2 && n3>n4 ? printf("%d",n3):
    n4>n1 && n4>n2 && n4>n3 ? printf("%d",n4): printf("a=b=c=d");
    
return(0); 
}
