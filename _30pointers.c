#include <stdio.h>

int main(){
    int x = 10;
    int  *y = &x;
    printf("%d\n", x);
    printf("%u\n", &x);
    printf("%u\n", y);
    printf("%d\n", *y);
    printf("%u\n", &y);

    return 0;
}