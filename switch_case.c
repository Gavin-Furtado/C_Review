#include <stdio.h>
#include <stdlib.h>

typedef enum{
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6,
    sunday = 7,
} days_of_week;

int main(){
    days_of_week today;

    printf("Moday/Sunday: %d, %d\n", monday,sunday);

    printf("Enter a day of  the week:\n");
    scanf("%u",&today);

    switch (today)
    {
    case monday:
        printf("It is Monday");
        break;
    case tuesday:
        printf("It is Tuesday");
        break;
    case wednesday:
        printf("It is Wednesday");
        break;
    case thursday:
        printf("It is Thursday");
        break;
    case friday:
        printf("It is Friday");
        break;
    case saturday:
        printf("It is Saturday");
        break;
    case sunday:
        printf("It is Sunday");
        break;

    default:
        printf("Invalid day");
        break;
    }

    return EXIT_SUCCESS;
}