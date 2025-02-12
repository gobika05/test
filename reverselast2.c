#include<stdio.h>

int main() {
    int num, first_two_digits, last_two_digits;
    int first_digit, second_digit, reversed_last_two_digits, final_number;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    last_two_digits = num % 100;
    first_digit = last_two_digits / 10;
    second_digit = last_two_digits % 10;
    reversed_last_two_digits = second_digit * 10 + first_digit;
    first_two_digits = num / 100;
    final_number =first_two_digits*100+  reversed_last_two_digits ;
    printf("The number after reversing the first two digits is: %d\n", final_number);
    return 0;
}
