#include <stdio.h>
#include <stdlib.h>

int moonLanding =1969;
float speedOfLight = 299792458;
float pi = 3.142;
unsigned hexaDead = 0xDEAD; 
unsigned hexaSecret = 51966;


int main(){
    printf("Moon Landing year is %10d\n",moonLanding);
    printf("Moon Landing year is %010d\n",moonLanding);

    printf("Speed of light is %.0f\n",speedOfLight);
    printf("Speed of light is %.3e\n",speedOfLight);

    printf("PI is %.2f\n",pi);
    printf("PI is %.1e\n",pi);

    return EXIT_SUCCESS;
}