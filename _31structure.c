 #include <stdio.h>
 
 struct myStructure
 {
    int myNum;
    char myLetter;
    char myString[10];
 };
 


 int main(){

    struct myStructure s1 = {13, 'A', "Atharva"};
    // s1.myNum = 28;
    // s1.myLetter = 'A';

    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    printf("My String: %s\n", s1.myString);

    struct myStructure s2;
    s2 = s1;

    printf("%d\n %c\n %s\n", s2.myNum, s2.myLetter, s2.myString);
    
    return 0;
 }