#include<stdio.h>
int main()
{
    int x,div;
    printf("enter any vaue:");
    scanf("%d",&x);
    div= x%8;
    printf("the remainder after dividing the given value by 8:%d",div);
    return 0; 
}