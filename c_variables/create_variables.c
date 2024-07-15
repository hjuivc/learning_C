#include <stdio.h>

int main() {
    // Integer variable
    int myInt = 5;

    // Floating point variable
    float myFloat = 6.2f;

    // Double precision floating point variable
    double myDouble = 9.99;

    // Character variable
    char myChar = 'A';

    // String (array of characters)
    char myString[] = "Hello, World!";

    // Boolean variable (C99 standard)
    _Bool myBool = 1; // 1 for true, 0 for false

    // Printing variables with type and value
    printf("Integer: %d\n", myInt);
    printf("Float: %f\n", myFloat);
    printf("Double: %lf\n", myDouble);
    printf("Char: %c\n", myChar);
    printf("String: %s\n", myString);
    printf("Boolean: %d\n", myBool); // Printed as integer (1 for true, 0 for false)

    return 0;
}