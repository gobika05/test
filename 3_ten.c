#include<stdio.h>
int main()
{
    int x,div,result;
    printf("enter any three digit value :");
    scanf("%d",&x);
    div= x/10;
    result = div%10;
    printf("the ten's digit of the given three digit value is:%d",result);
    return 0; 
}