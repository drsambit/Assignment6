#include <stdio.h>
int main(){
    int n,m;
    printf("Enter the no of rows of the array");
    scanf("%d",&m);
    printf("Enter the no of columns of the array");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the %dth row %dth column element",i,j);
            scanf("%d",&arr[i][j]);

        }
        
        
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ",arr[j][i]);

        }
        printf("\n");
    }
    
    return 0;
}