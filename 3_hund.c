#include<stdio.h>
int main()
{
    int x,div;
    printf("enter any three digit value :");
    scanf("%d",&x);
    div= x/100;
    printf("the hundred's digit of the given three digit value is:%d",div);
    return 0; 
}