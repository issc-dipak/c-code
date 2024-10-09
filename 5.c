// #include<stdio.h>
// int main(){
//     int a=10;
//     int b=20;
//     int c=a;
//     int a=b;
//     printf("%d",a,b)
//     return 0;
// }
#include<stdio.h>
int main(){

int a;
int b;
printf("entre the a");
scanf("%d",&a);
printf("entre the b");
scanf("%d",&b);
int temp=a;
   a=b;
   b=temp;
   printf("%d %d",a,b);
   return 0;
}