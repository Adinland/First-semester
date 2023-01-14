#include <iostream>

using namespace std;

int main()
{
    float* num_array, lenght = 0, sum = 0, min = 0, max = 0;
    for (;lenght <= 0;)
    {
        cout << "Enter the number of the lenght - ";
        cin >> lenght;
        if (lenght <= 0)
        {
            cout << "Incorrect number!\n";
        }
    }
    //начало, заполнение, вычисления
    num_array = new float[lenght];
    for (int i = 0; i < lenght; i++)
    {
        cout << i + 1 << " element = ";
        cin >> num_array[i];
        sum += num_array[i];
        if (i == 0)
        {
            min = num_array[i];
            max = num_array[i];
        }
        else if (min > num_array[i])
            min = num_array[i];
        else if (max < num_array[i])
            max = num_array[i];
    }
    delete[] num_array;
    cout << "\nSum of elements = " << sum << "\nMin = " << min << "\nMax = " << max << "\nAverage = " << sum/lenght;
    return 0;
}