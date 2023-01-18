#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int** arr, rw = 0, cl = 0;
    srand(time(NULL));

    cout << "Enter the number of columns - ";
    cin >> cl;
    cout << "then rows - ";
    cin >> rw;
    //создание
    arr = new int* [rw];
    for (int i = 0; i < rw; i++)
    {
        arr[i] = new int[cl];
    }
    //заполнение
    for (int i = 0; i < rw; i++)
    {
        for (int j = 0; j < cl; j++)
            arr[i][j] = rand() % 10 - 2;

    }
    //вывод
    for (int i = 0; i < rw; i++)
    {
        cout << "| ";
        for (int j = 0; j < cl; j++)
        {
            if (arr[i][j] < 0)
                cout << arr[i][j] << " | ";  //ровные грани
            else
                cout << arr[i][j] << "  | ";
        }  
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