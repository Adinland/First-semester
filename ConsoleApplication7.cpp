#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "\tExercise 1\n";
    for (int i = 1; i <= 10; i++)
        cout << "5 * " << i << " = " << 5 * i << endl;
    cout << "\tExercise 2\n";
    srand(time(0));
    int number = rand() % 15 + 1;
    for (int exet_token = 0; exet_token != number;)
    {
        cin >> exet_token;
        if (exet_token == number)
            break;
        else
        {
            if (number > 7)
                cout << "more than 7\n";
            else
                cout << "not more than 7\n";
            if (number > 10)
                cout << "more than 10\n";
            else
                cout << "not more than 10\n";
            if (number % 2 == 0)
                cout << "devisible by 2\n";
            else
                cout << "not devisible by 2\n";
            if (number % 3 == 0)
                cout << "devisible by 3\n";
            else
                cout << "not devisible by 3\n";
        }
    }
    return 0;
}