#include <stdio.h>

int main(){
    char myString[300];

    printf("Enter your first name:\n");
    scanf("%s", &myString);

    printf("Hello %s!", myString);


    return 0;
}