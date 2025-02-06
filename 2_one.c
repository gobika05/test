#include<stdio.h>
int main()
{
    int two_digit,remainder;
    printf("enter any two digit value:");
    scanf("%d",&two_digit);
    remainder=two_digit%10;
    printf("the one's digit of the given number is:%d",remainder);
    return 0; 
}