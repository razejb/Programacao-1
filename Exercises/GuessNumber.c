#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){


    time_t t ;
    int i = 0 ;
    int maxGuesses = 5 ;
    int randomNumber = 0 ;

    
    //Initialization of random number generator
    srand((unsigned) time (&t)) ;

    //get the random number
    randomNumber = rand() % 21 ;
    
    while ( maxGuesses > 0 )
        {
            printf ( "\nYou have %d tr%s left.", maxGuesses, maxGuesses == 1 ? "y" : "ies " ) ;
            printf ( "\nInsira de 0 a 20, um número: " ) ;
            scanf ( "%d", &i ) ;
            --maxGuesses ;
    
            if ( i == randomNumber )
                {
                    printf ( "\nCongratulations\n" ) ;
                    break ;
                }
            else if ( i < 0 || i > 20 ) //checking for an invalid guess
                {
                    printf ( "\nÉ de 0 a 20 crlh! \n" ) ;
                }
            else if ( i < randomNumber )
                {
                    printf ( "\nUm bocado mais acima" ) ;
                }
            else if ( i > randomNumber)
                printf ( "\nUm bocado mais abaixo" ) ;
            else
                puts ( "Try Again .I." ) ;
        }
        if ( i != randomNumber )
        printf ( "\n\nFalhas-te todas a tentativas, LOSER :D\n" ) ;        

    
return 0;
   

}