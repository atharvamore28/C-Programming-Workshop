#include <stdio.h>

void myFunction();


int main(){
 myFunction("Atharva", 18);
 myFunction("Preet", 17);
 myFunction("Yash", 18);
 myFunction("Samarth", 19);

 return 0;
}

void myFunction(char name[],int age){
    printf("Hi! %s, you are %d years old.\n", name, age);
}