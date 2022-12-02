#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){

    enum Company{ GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSFT } ;

    enum Company xerox = XEROX ;
    enum Company google = GOOGLE ;
    enum Company ebay = EBAY ;
    enum Company yahoo = YAHOO ;
    enum Company facebook = FACEBOOK ;
    enum Company microsoft = MICROSFT ;
    

    printf("The value of xerox is: %d\n", xerox) ;
    printf("The value of google is: %d\n", google) ;
    printf("The value of ebay is: %d\n", ebay) ;
    printf("The value of yahoo is: %d\n", yahoo) ;
    printf("The value of facebook is: %d\n", facebook) ;
    printf("The value of microsoft is: %d\n", microsoft) ;
    



    return 0;
}


   

    

