#include<stdio.h>
int main()
{
    int x,div;
    printf("enter any three digit value :");
    scanf("%d",&x);
    div= x%10;
    printf("the one's digit of the given three digit value is:%d",div);
    return 0; 
}