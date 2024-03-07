#include <stdio.h>
void primerange(int a, int b){
    printf("Prime numbers between %d-%d are:\n",a,b);
    int flag=0;
    for(int i=a;i<=b;i++){
        int c=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
        if (c==2){
            printf("%d ",i);
            flag++;
        }
    }
    if (flag==0){
        printf("none");
    }
    return ;
}
int main (){
    int a,b;
    printf("Enter lower limit:");
    scanf("%d",&a);
    printf("Enter upper limit:");
    scanf("%d",&b);
    primerange(a,b);
    return 0;

}