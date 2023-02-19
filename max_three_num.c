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

    max = (n1 > n2 && n1 > n3 && n1 > n4) ? n1 : ((n2 > n3 && n2 > n4) ? n2 : (n3 > n4 ? n3 : n4));
    
    // Print the largest number
    printf("Largest number among %d, %d, %d and %d is %d.",
                                         n1, n2, n3, n4, max);
    
return(0); 
}
