#include <stdio.h>

int main(){
        char thisIsString[] = "Hello I am Atharva!";
    printf("%s\n", thisIsString);

    
    // That we have to use the “%c” format specifier to print a single character.

   
    printf("The word associated with value 1 is : %c\n", thisIsString[0]);
    printf("The word associated with value 2 is : %c\n", thisIsString[1]);
    printf("The word associated with value 3 is : %c\n", thisIsString[2]);
    printf("The word associated with value 4 is : %c\n", thisIsString[3]);
    printf("The word associated with value 5 is : %c\n", thisIsString[4]);

    return 0;
}