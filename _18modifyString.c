#include <stdio.h>
int main()
{
    char thisIsString[] = "Hello I am Atharva!";
    printf("Before: %s\n", thisIsString);

    thisIsString[0] = 'J';
    printf("After: %s\n", thisIsString);

    return 0;
}