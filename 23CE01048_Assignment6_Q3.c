#include <stdio.h>
void reverse (int i,int j,int arr[]){
    if(i>=j){
        return ;
    }
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    reverse(++i,--j,arr);
    return ;

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
    int i=0,j=n-1;
    reverse(i,j,arr);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;


}