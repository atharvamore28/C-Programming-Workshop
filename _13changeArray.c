#include <stdio.h>
int main()
{
    int arr[] = {15, 25, 35, 45, 55, 65, 75, 85, 95, 105};
    printf("The second value is: %d\n", arr[1]);

    arr[1] = 100;
    printf("The second value is: %d\n", arr[1]);
    
    return 0;
}