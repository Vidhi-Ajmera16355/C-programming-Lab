#include <stdio.h>
int main()
{
    int m;
    printf("Enter number of rows of first matrix:");
    scanf("%d",&m);
    int n;
    printf("Enter number of cloumns of first matrix:");
    scanf("%d",&n);
    //input first matrix!!
    int a[m][n];
    printf("\n Enter the elements f first matrix:");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int res;
    
    // second matrix !!
    int p;
    printf("Enter number of rows of second matrix:");
    scanf("%d",&p);
    int q;
    printf("Enter number of cloumns of second matrix:");
    scanf("%d",&q);
    //input second matrix!!
    int b[p][q];
    printf("\n Enter the elements f first matrix:");
    for (int i=0;i<p;i++){
        for (int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    if (n!=p){
        printf("The matrices cannot be multiplied!!");
    }
    else {
        // multiplication!!
        int res[m][q];
        for (int i=0;i<m;i++){
            for (int j=0;j<q;j++){
                res [i][j]=0;
                for (int k=0;k<n;k++){
                res[i][j]+=a[i][k]*b[k][i];
            }
        }
    }
    //printf
    for (int i=0;i<m;i++){
    for (int j=0;j<q;j++){
    printf("%d", res[i][j]);
    }}
    }
}
    
