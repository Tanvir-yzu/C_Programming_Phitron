//Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that. Absolute value means if the value is negative it will be converted to positive value. Then print the value in the main function.

#include <stdio.h>

int my_abs(int value) {
    if (value < 0) {
        return -value;
    } else {
        return value;
    }
}

int main() {
    int num ;

    scanf("%d", &num);
    int abs_num = my_abs(num);
    printf(" %d\n", abs_num);
    return 0;
}