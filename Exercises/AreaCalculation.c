#include<stdio.h>
#include<stdbool.h>

int main(int argc, char *argv[] ){

    
   //declaring variables
   float height, width;

   float perimeter = 0.0;
   float area = 0.0;  

   int numberArguments = argc; 
   char *argument1 = argv[1];
   char *argument2 = argv[2];

   
    //Values
   printf("Introduce values\n");
   printf("Height: ");
   scanf("%f", &height);
   printf("Width: ");
   scanf("%f", &width);

   printf("\n");
   printf("\n");


    //Calculation
    perimeter = 2.0 * (height + width);
   printf("Perimeter is: %.2f", perimeter );

   printf("\n");

    area = width * height;
   printf("Area is: %.2f", area );

   printf("\n");

    //Arguments
   printf("Number of Arguments: %d\n", numberArguments);
   printf("heigth: %s\n", argument1);
   printf("Width: %s\n", argument2);







    return 0;
}