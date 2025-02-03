#include <stdio.h>
int main() {
int age;
printf("Enter the age:");
scanf("%d",&age);
if(age<12){
    printf("they are a child and have 50% discount");
}
if(age>=12 && age<=18){
    printf("they are teenagers:");
    if(age==18){
        printf("they have 20 percent discount");
    }
    else
       {
           printf("they have 10%");
       }
   
}
if(age>18){
    printf("They are adult:");

if (age==60 || age>60){
    printf("they are senior citizen and have 30%");
}
else{
    printf("they get no discount");
}
   
}
      return 0;

}
