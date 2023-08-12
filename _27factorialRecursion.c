#include <stdio.h>

int fact();

int main()
{
    int num;
    printf("Enter a positive number \n");
    scanf("%d", &num);
    int n = fact(num);
    printf("The factorial of %d is %d", num, n);
    return 0;
}

int fact(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 01;
    }
    else
    {
        return num * fact(num - 1);
    }
    return 0;
}