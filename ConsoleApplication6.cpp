#include <iostream>

using namespace std;

int main()
{
    cout << "\tExercise 1.1\n";
    for (int i = 0; i < 9; i++)
        cout << "Hello!\n";
    cout << "\tExercise 1.2\n";
    for (int i = 1; i <= 15; i++)
        cout << i << ", ";
    cout << "\n\tExercise 1.3\n";
    for (int i = 1; i <= 15; i++)
    {
        if (i % 2 != 0)
            cout << i << ", ";
    }
    cout << "\n\tExercise 2\n";
    int summ = 0;
    for (int i = 5; i <= 15; i++)
        summ += i;
    cout << "Summ = " << summ << endl;
}