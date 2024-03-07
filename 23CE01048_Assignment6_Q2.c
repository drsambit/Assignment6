#include <stdio.h>
void avggreater(int arr[]){
    float avg,sum=0.0;
    for (int i=0;i<5;i++){
        sum=sum+arr[i];

    }
    avg=sum/5.0;
    for(int i=0;i<5;i++){
        if (arr[i]>avg){
            printf("%d ",arr[i]);
        }
    }
    return ;
}
int main (){
    int arr[5];
    for (int i=0;i<5;i++){
        printf("Enter the %dth element",i);
        scanf("%d",&arr[i]);
    }
    avggreater(arr);
    return 0;

}