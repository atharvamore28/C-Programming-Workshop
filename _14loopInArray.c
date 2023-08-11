#include <stdio.h>

int main(){
    int arr[] = {15, 25, 35, 45, 55, 65, 75, 85, 95, 105};
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("The Array at location %d is : value : %d\n", i, arr[i]);
    }
    return 0;
}