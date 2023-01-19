#include <iostream>

using namespace std;
int main()
{
    int* num_array, lenght = 0, sum=0;
    for (;lenght <= 0;)
    {
        cout << "Enter the number of the lenght - ";
        cin >> lenght;
        if (lenght <= 0)
        {
            cout << "Incorrect number!\n";
        }
    }
    //начало, заполнение
    num_array = new int[lenght];
    for (int i = 0; i < lenght; i++)
    {
        cout << i+1 << " element = ";
        cin >> num_array[i];
    }
    //сортировка
    for (int i = 1, buff = 0; i < lenght; i++)
    {
        for (int j = i; num_array[j] < num_array[j - 1] && j >= 0; j--)
        {
            buff = num_array[j - 1];
            num_array[j - 1] = num_array[j];
            num_array[j] = buff;
            sum++;
        }
        cout << i << " <- i \n";
    } 
    //вывод
    for (int i = 0; i < lenght; i++)
        cout << num_array[i] << " ";
    cout << "\nsum of iterations = " << sum;
    delete[] num_array;
    return 0;
} 
