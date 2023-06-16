#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    

   int n = 5 ; 
   int m = 8 ;
   float a1[5] ; //valid
   float a2[5*2 + 1] ; //valid
   float a3[sizeof(int) + 1] ; //valid 
   float a4[-4] ; //no, size must be > 0
   float a5[0] ;  //no, size must be > 0
   float a6[2.5] ;//no, size must be an integer
   float a7[(int)2.5] ; //yes, typecast float to int constant
   float a8[n] ;  //not allowed before C99, VLA
   float a9[m] ;  //not allowed before C99, VLA


return 0 ;        

}