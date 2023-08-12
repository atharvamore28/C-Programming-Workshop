#include <stdio.h>

int main(){
    int myAge = 28;
    int* ptr = &myAge; // pointer declaration.

    printf("myAge = %d\n", myAge);

    // Reference: Output the memory address of myAge with the pointer
    printf("ptr = %p\n", ptr);

    // Dereference: Output the value of myAge with the pointer
    printf("*ptr = %d\n", *ptr);

   return 0;
}