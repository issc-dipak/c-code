#include<stdio.h>
int main(){
    int a[5],b;
    printf("enter the array");
    for(int i=0 ;i<5; i++){
        scanf("%d",&a[i]);
    }
    printf("array of element");
    for(int i=0;i<5 ; i++){
     printf("%d",a[i]);
    }
    return 0;
}