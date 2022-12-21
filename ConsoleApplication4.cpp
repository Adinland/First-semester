#include <stdio.h>

int main()
{
    int day_of_week;
    printf("Enter the number of the day of the week\n");
    scanf_s("%i", &day_of_week);
    switch (day_of_week)
    {
        case 1:
            printf("Monday ");
            break;
        case 2:
            printf("Tuesday ");
            break;
        case 3:
            printf("Wednesday ");
            break;
        case 4:
            printf("Thursday ");
            break;
        case 5:
            printf("Friday ");
            break;
        case 6:
            printf("Saturday ");
            break;
        case 7:
            printf("Sunday ");
            break;
    default:
        printf("Error, please enter a number from 1 to 7 ");
        break;
    }
    return 0;
}