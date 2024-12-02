#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/****EVEN OR ODD NUMBER ****/

int main(){
    int number = 0;
    bool even = true;
    bool odd = false;
    bool result = 0;

    printf("Enter a number:\n");
    scanf("%d",&number);

    printf("The number is =  %d\n",number);

    if (number<0){
        printf("The number is negative\n");
        return EXIT_FAILURE;
    }

    result = (number % 2==0) ? even: odd;

    if(result){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }

    
    
    return EXIT_SUCCESS;
}