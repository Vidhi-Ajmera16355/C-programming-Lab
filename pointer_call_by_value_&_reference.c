#include <stdio.h>
int swap(int a,int b){
    int temp;
    
    temp=a;
    a=b;
    b=temp;
}
int swap1(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    printf("Before calling function:\n");
    printf("%d %d\n",x,y);
    printf("After calling function(swap by call by value):\n");
    swap(x,y);
    printf("%d %d\n",x,y);
    swap1(&x,&y);
    printf("After calling function(swap by call by reference):\n");
    printf("%d %d\n",x,y);
    return 0;
}
