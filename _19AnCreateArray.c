#include <stdio.h>

int main(){
    char greeting1[] = {'H', 'e','l','l','o',' ','w','o','l','r','d', '!', '\0'};
    char greeting2[] = {"Hello World!"};

    printf("Greeting1 is : %s\n", greeting1);
    printf("Greeting2 is : %s\n", greeting2);

    return 0;
}