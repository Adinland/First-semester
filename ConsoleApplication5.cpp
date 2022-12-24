#include <iostream>
#include <math.h>

using namespace std;

void protection_from_user(int& d, int& m, int& y);

int main()
{
    int d=0, m=0, y=0;
    protection_from_user(d, m, y);
    cout << y << "." << m << "." << d << endl;
    if (y % 4 == 0)
        cout << "Leap year: yes" << endl;
    else
        cout << "Leap year: no" << endl;
    switch (y % 12)
    {
        case 3:
            cout << "Year of the pig" << endl;
            break;
        case 4:
            cout << "Year of the rat" << endl;
            break;
        case 5:
            cout << "Year of the bull" << endl;
            break;
        case 6:
            cout << "Year of the tiger" << endl;
            break;
        case 7:
            cout << "Year of the bunny" << endl;
            break;
        case 8:
            cout << "Year of the dragon" << endl;
            break;
        case 9:
            cout << "Year of the sneak" << endl;
            break;
        case 10:
            cout << "Year of the horse" << endl;
            break;
        case 11:
            cout << "Year of the goat" << endl;
            break;
        case 0:
            cout << "Year of the monkey" << endl;
            break;
        case 1:
            cout << "Year of the cockral" << endl;
            break;
        case 2:
            cout << "Year of the dog" << endl;
            break;
    }
    if ((m == 12 && d >= 21) || (m == 1 && d <= 20))
        cout << "Zodiac sign: Capricorn" << endl;
    else if ((m == 1 && d >= 21) || (m == 2 && d <= 20))
        cout << "Zodiac sign: Aquarius" << endl;
    else if ((m == 2 && d >= 21) || (m == 3 && d <= 20))
        cout << "Zodiac sign: Pisces" << endl;
    else if ((m == 3 && d >= 21) || (m == 4 && d <= 20))
        cout << "Zodiac sign: Aries" << endl;
    else if ((m == 4 && d >= 21) || (m == 5 && d <= 20))
        cout << "Zodiac sign: Taurus" << endl;
    else if ((m == 5 && d >= 21) || (m == 6 && d <= 20))
        cout << "Zodiac sign: Gemini" << endl;
    else if ((m == 6 && d >= 21) || (m == 7 && d <= 20))
        cout << "Zodiac sign: Cancer" << endl;
    else if ((m == 7 && d >= 21) || (m == 8 && d <= 20))
        cout << "Zodiac sign: Leo" << endl;
    else if ((m == 8 && d >= 21) || (m == 9 && d <= 20))
        cout << "Zodiac sign: Virgo" << endl;
    else if ((m == 9 && d >= 21) || (m == 10 && d <= 20))
        cout << "Zodiac sign: Libra" << endl;
    else if ((m == 10 && d >= 21) || (m == 11 && d <= 20))
        cout << "Zodiac sign: Scorpio" << endl;
    else if ((m == 11 && d >= 21) || (m == 12 && d <= 20))
        cout << "Zodiac sign: Sagittarius" << endl;

    return 0;
}

void protection_from_user(int& d, int& m, int& y)
{
    printf("Enter your birthday: first - year, then - month, then - day.\n");
    while (y <= 0)
    {
        printf("year <- ");
        cin >> y;
        if (y <= 0)
            printf("Incorrect number!\n");
    }
    while (m <= 0 || m > 12)
    {
        printf("month <- ");
        cin >> m;
        if(m <= 0 || m > 12)
            printf("Incorrect number!\n");
    }
    for (bool exet_token = false; exet_token != true;)
    {
        printf("day <- ");
        cin >> d;
        if ((y % 4 == 0) && m == 2 && d <= 29 && d > 0)
        {
            exet_token = true;
            break;
        }
        else if ((y % 4 > 0) && m == 2 && d <= 28 && d > 0)
        {
            exet_token = true;
            break;
        }
        else if (m <= 7 && (m % 2 == 0) && m != 2 && d <= 30 && d > 0)
        {
            exet_token = true;
            break;
        }
        else if (m <= 7 && (m % 2 > 0) && m != 2 && d <= 31 && d > 0)
        {
            exet_token = true;
            break;
        }
        else if (m > 7 && (m % 2 == 0) && m != 2 && d <= 31 && d > 0)
        {
            exet_token = true;
            break;
        }
        else if (m > 7 && (m % 2 > 0) && m != 2 && d <= 30 && d > 0)
        {
            exet_token = true;
            break;
        }
        else
            printf("Incorrect number!\n");
    }
}