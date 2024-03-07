#include <stdio.h>
void subset(int arr[],int brr[],int n,int m){
    int k=0;
    for(int i=0;i<m;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr[j]==brr[i]){
                flag++;
            }

        }
        if (flag==0){
            printf("Array brr not a subset of Array arr");
            k++;
            break;
        }
    }
    if(k==0){
        printf("Array brr is a subset of Array arr");
    }
    return;

}
int main (){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %dth element",i);
        scanf("%d",&arr[i]);
    }
    int m;
    printf("Enter the size of the array:");
    scanf("%d",&m);
    int brr[n];
    for(int i=0;i<m;i++){
        printf("Enter the %dth element",i);
        scanf("%d",&brr[i]);
    }
    subset(arr,brr,n,m);
    return 0;


}