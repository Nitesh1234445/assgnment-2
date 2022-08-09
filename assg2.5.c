#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,a,b,c;
    printf("enter a three digit number");
    scanf("%d",&x);
    a=x%10;
    x/=10;
    b=x%10;
    x/=10;
    c=x%10;
    printf("sum of the digits is %d",a+b+c);

    return 0;
}
