#include <stdio.h>

int main()
{
    int myAge = 28;
    printf("%p\n", &myAge);

    float myFloat = 28.28;
    printf("%p\n", &myFloat);

    char myName = "b";
    printf("%p\n", &myName);
    return 0;
}