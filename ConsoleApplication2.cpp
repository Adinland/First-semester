#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter A, then B\nA <- ");
    scanf_s("%i", &a);
    printf("B <- ");
    scanf_s("%i", &b);
    if (a > b)
        printf("A more then B");
    else if (a == b)
        printf("A equals B");
    else
        printf("B more then A");
    return 0;
}

/* https://github.com/Adinland/HomeWork.git */