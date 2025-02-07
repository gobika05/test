
#include<stdio.h>
int main()
{
    int num,x,y,result;
    printf("enter any 2digit value:");
    scanf("%d",&num);
    x=num%10;
    y=num/10;
    result=x*10+y;
    printf("reverse of the given 2 digits is:%d",result);

}