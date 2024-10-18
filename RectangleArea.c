#include<stdio.h>

//Thats code calculate a rectangle area in C languange

int main() {
  //we need to declare three variables
  int base;
  int height;
  int area;

  printf("type the base value: ");
  /*
   we use the scanf function to return the value than the user types to a variable
   in this case, we'll need return the value than the user type in our variable "base"
    */
  scanf("%d", &base);

  printf("now, type the height value: ");

  /*
     now we'll make the same thing, but returning the user's input at
     the variable "height"
    /*
    
  scanf("%d", &height);

  /*
     now, to calculate the rectangle area, we need to multiply
     the  base value with the height value, for do that in C,
     we redeclare the variable, multiplying that two others 
     variables
    */
    area = base * height;

   printf("the rectangle's area is %d", area);
  
 return 0;
}
