#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf("unit digit of given number is %d",a%10);
    
    return 0;
}
