#include <stdio.h>
 
int main(){
    /*
    int a = 10;
    int b = 20;
    if (a > b)
    {
        printf("%d is greater than%d", a, b);
    }
    else
    {
        printf("%d is greater than%d", b, a);
    }
    */
    

     int a = 40;
    int b = 40;
    if (a > b)
    {
        printf("%d is greater than%d", a, b);
    }
    else if(b > a)
    {
        printf("%d is greater than%d", b, a);
    }
    else{
        printf("%d are equal %d", b, a);
    }
    return 0;
}