#include <stdio.h>

int main(){
   
   // Integer
   int age = 28;
   printf("Age is %d\n", age);
   printf("Age is %i\n", age);

   // Float
   float fracn = 45.5566;
   printf("The fraction is %f\n", fracn);
    
   // char
   char letter = 'a';
   printf("The Letter is %c\n", letter);

   // double
   double frac = 7.556565;
   printf("The frac is %lf\n", frac);

   // sizeOf operator
   printf("%lu\n", sizeof(age));

   return 0;
}