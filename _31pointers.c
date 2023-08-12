#include <stdio.h>

int main()
{
    int myAge = 28;
    int *ptr = &myAge;

    printf("myAge = %d\n", myAge);
    printf("&myAge = %p\n", &myAge);
    printf("ptr = %p\n", ptr);

    return 0;
}
