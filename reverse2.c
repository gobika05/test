#include<stdio.h>
int main()
{
    int num,x,y=0;
    printf("enter any 2digit value:");
    scanf("%d",&num);
    while(num>0)
    {
      x=num%10;
      y=(y*10)+x;
      num=num/10;
    }
    printf("reverse of the given 2 digits is:%d",y);

}