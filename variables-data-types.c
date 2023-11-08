#include <stdio.h>

int main(){

    // Double and FLoat //
    int a = 10; //integer
    double b = 49; // 64 bit number or decimal number
    float c = 34; // 32 bit number
    printf("%lu\n",sizeof(b));

    // Character and String(Character array) //
    char d = 'a';
    printf("The single charater is %c \n", d);
    char e[] = "Somewhere Something";
    printf("The character array is: %s\n",e);
    return 0;
}
