#include <stdio.h>
#include <stdbool.h>

int main(void){
    int integerVar = 100;
    float floatingVar = 331.79546246;
    float floatingDecimalsVar = 331.79546246;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    _Bool boolVarOne = 1;
    bool boolVarTrue = true;
    _Bool boolVarZero= 0;
    bool boolVarFalse = false;


    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("floatingDecimalsVar = %3.2f\n", floatingDecimalsVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);

    printf("boolVarOne = %i\n", boolVarOne);
    printf("boolVarTrue = %i\n", boolVarTrue);
    printf("boolVarZero = %i\n", boolVarZero);
    printf("boolVarFalse = %i\n", boolVarFalse);

    return 0;
}
