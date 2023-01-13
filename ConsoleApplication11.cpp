#include <iostream>

using namespace std;

int main()
{
    int *num_array2, num_array1[7], a1_lenght = 0;

    cout << "\tExercise 1\n";
    for (int i = 0; i < 7; i++)
    {
        cout << "-> ";
        cin >> num_array1[i];
    }
    for (int i = 0; i < 7; i++)
        cout << num_array1[i] << " ";

    cout << "\n\tExercise 2\nEnter the lenght of the array - ";
    for (;a1_lenght <= 0;)
    {
        cin >> a1_lenght;
        if (a1_lenght <= 0)
            cout << "Wrong lenght.\nEnter the lenght of the array - ";
    }

    num_array2 = new int[a1_lenght];

    for (int i = 0; i < a1_lenght; i++)
    {
        cout << "-> ";
        cin >> num_array2[i];
    }
    for (int i = 0; i < a1_lenght; i++)
        cout << num_array2[i] << " ";
    delete[] num_array2;
    return 0; 
}
