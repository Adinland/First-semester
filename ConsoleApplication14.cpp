#include <iostream>

using namespace std;

int main()
{
    int** arr, rw = 0, cl = 0;
    cout << "Enter the number of columns - ";
    cin >> cl;
    cout << "then rows - ";
    cin >> rw;
    //создание
    arr = new int*[rw];
    for (int i = 0; i < rw; i++)
    {
        arr[i] = new int[cl];
    }
    //заполнение
    for (int i = 0; i < rw; i++)
    {
        for (int j = 0; j < cl; j++)
        {
            cout << "-> ";
            cin >> arr[i][j];
        }
            
    }
    //вывод
    for (int i = 0; i < rw; i++)
    {
        cout << "| ";
        for (int j = 0; j < cl; j++)
            cout << arr[i][j] << " | ";
        cout << "\n";
    }
    //удаление
    for (int i = 0; i < rw; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}