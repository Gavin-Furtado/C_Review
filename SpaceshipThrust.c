#include <stdio.h>
#include <stdlib.h>

enum thrust{
    none = 0,
    low = 5,
    medium = 9,
    high = 12,
    maximum =  20,
};

int main(){
    enum thrust sp_thrust;

    sp_thrust = none;
    printf("Spaceship ready to go, thrust level is %d\n",sp_thrust);

    sp_thrust = maximum;
    printf("Spaceship ready to takeoff, thrust level is %d\n",sp_thrust);

    sp_thrust = medium;
    printf("Spaceship is entering ionoshpere, thrust level is %d\n",sp_thrust);
     
    sp_thrust = low;
    printf("Spaceship is in deep space, thrust level is %d\n",sp_thrust);
    

    return EXIT_SUCCESS;
}