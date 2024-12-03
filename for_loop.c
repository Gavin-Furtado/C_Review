#include <stdio.h>
#include <stdlib.h>

int main(){
    const char symbol = 'x';
    const int BASE_WIDTH = 10;
    const int TIP_WIDTH =  5;

    for (size_t i = 0; i < BASE_WIDTH; i++)
    {
        printf("%c",symbol);
    }

    printf("\n");
    
    for (size_t i = 1; i < TIP_WIDTH; i++)
    {
        printf("%*c",i,' ');
        printf("%c\n",symbol);
    }
    
    for (size_t i = TIP_WIDTH; i > 0; i--)
    {
        printf("%*c",i,' ');
        printf("%c\n",symbol);
    }

    for (size_t i = 0; i < BASE_WIDTH; i++)
    {
        printf("%c",symbol);
    }

    return EXIT_SUCCESS;
}