#include <stdio.h>

void great() {
    int first_value, second_value, third_value;

    printf("Enter first value: ");
    scanf("%d", &first_value);

    printf("Enter second value: ");
    scanf("%d", &second_value);

    printf("Enter third value: ");
    scanf("%d", &third_value);

    if (first_value > second_value && first_value > third_value) {
        printf("The biggest value among the given three is: %d\n", first_value);
    } 
    else if (second_value > first_value && second_value > third_value) {
        printf("The biggest value among the given three is: %d\n", second_value);
    } 
    else {
        printf("The biggest value among the given three is: %d\n", third_value);
    }
}

int main() {
    great();
    return 0;
}
