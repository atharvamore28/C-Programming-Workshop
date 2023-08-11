#include <stdio.h>

int main(){
    int a = 1;

    switch (a)
    {
    case 1:
        printf("Today is Sunday");
        break;
    case 2:
        printf("Today is Monday");
        break;
    case 3:
        printf("Today is Tuesday");
        break;
    case 4:
        printf("Today is Wednesday");
        break;
    case 5:
        printf("Today is Thursday");
        break;
    case 6:
        printf("Today is Friday");
        break;
    case 7:
        printf("Today is Saturday");
        break;
    
    default:
    printf("N/A");
        break;
    }
    return 0;
}