#include<stdio.h>
int main()
{
    int num,x,y=0;
    printf("enter any 3digit value:");
    scanf("%d",&num);
    while(num>0)
    {
      x=num%10;
      y=y+x;
      num=num/10;
    }
    printf("sum of the given 3 digits is:%d",y);

}