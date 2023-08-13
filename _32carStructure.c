#include <stdio.h>

  struct car
  {
    char brand[50];
    char model[50];
    int year;
  };
  

int main(){
      
      struct car c1 = {"Toyota", "LC", 2023};
      struct car c2 = {"Mercedes", "GLS", 2022};
      struct car c3 = {"BMW", "X1", 2020};

      printf("%s\t %s\t %d\n", c1.brand, c1.model, c1.year);
      printf("%s\t %s\t %d\n", c2.brand, c2.model, c2.year);
      printf("%s\t %s\t %d\n", c3.brand, c3.model, c3.year);



    return 0;
}