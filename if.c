#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number = \n");
    scanf("%d",&num);
    switch (num){
        case 10:
        printf("%d\n",num/2);
        break;
        case 20:
        printf("%d\n",num/3);
        break;
        case 30:
        printf("%d\n",num/4);
        break;
        case 40:
        printf("%d\n",num/5);
        break;

        return 0;
    }
}