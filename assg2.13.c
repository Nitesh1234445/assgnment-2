#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,x;
    printf("enter a three digit number");
    scanf("%d",&x);
    a=x%10;
    b=x/10;
    printf("%d",a*100+b);
     
    return 0;
}
