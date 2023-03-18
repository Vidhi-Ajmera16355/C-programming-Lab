#include <stdio.h>
int main()
{
    int i, j, q, rem, end;
    int fact, sum;
    printf("Enter upper limit: ");
    scanf("%d", &end);
    printf("All Strong numbers between 1 to %d are:\n", end);
    for(i=1; i<=end; i++){
        q = i;
        sum = 0;
        while(q>0){
            fact = 1;
            rem = q%10;
            for( j=1; j<=rem; j++)
            {
                fact=fact*j;
            }
            sum += fact; 
            q /= 10;
        }
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
