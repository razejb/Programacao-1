#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i ;

    for ( i = 1 ; i <= 10 ; i = i + 1 ) 
        
            if ( i == 60 ) 
                    break ;
            
            else if ( i % 2 == 1 )
                    continue ;
            else
                
                printf ( "%d\n", i ) ;
                printf ( "FIM DO CICLO\n" ) ;
                
        
        
        
        
        


   
    
return 0;
   

}