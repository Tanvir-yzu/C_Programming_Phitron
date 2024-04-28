//Write a function named my_len() which receives a string as a parameter and then counts the length of that string and returns that count. Don’t use strlen() function to get the length of the string. After receiving that count in the main function print it.
//Note: The string will not have any spaces.
#include <stdio.h>

int my_len(const char *str) {
    int count = 0;
    
    while (str[count] != '\0') {
        count++;
    }
    
    return count;
}

int main() {
    const char *str ;
    scanf("%s", str);

    int length = my_len(str);
    
    printf(" %d\n", length);
    
    return 0;
}