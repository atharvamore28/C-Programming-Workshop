#include <stdio.h>

void parameters();

int main()
{
    parameters("Atharva");
    parameters("Preet");
    parameters("Yash");
    parameters("Samarth");
    return 0;
}

void parameters(char name[])
{
    printf("Hello %s!\n", name);
}