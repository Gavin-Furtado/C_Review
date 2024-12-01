#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum menu{
    TEA =10, //0
    COFFEE = 15, //1
    JUICE = 13,
    BEER = 5,
};

int main(){
    // unsigned students = 25U;
    // unsigned long long worldPopulation = 7801235945L;

    // printf("%12u | Students in the class\n",students);
    // printf("%12lu | World Population now\n",worldPopulation);

    ///// Float /////
    double decimalDigits =1.23456789;

    double worldPopulation = 7.801E9;

    double plankConstant = 6.626E-34;

    printf("%15.2f | 3 decimal digit\n", decimalDigits);
    printf("%15.2f | 3 decimal digit\n", worldPopulation);
    printf("%15.5e | 3 decimal digit\n", worldPopulation);
    printf("%15.2e | 3 decimal digit\n", plankConstant);

    //// char data type ////
    char c ='G';
    printf("char c: %d\n",c);
    printf("char c: %c\n",c);

    c=70;
    printf("char c: %c\n",c);

    //// Boolean ////
    bool a = true;
    bool b = false;

    printf("a(true):  %d\n",a);
    printf("a(true):  %d\n",b);

    //// Enumeration data type ///

    enum menu jack = TEA;
    enum menu john = BEER;

    printf("jack ordered= %d\n",jack);
    printf("john ordered= %d\n",john);

    return EXIT_SUCCESS;
}