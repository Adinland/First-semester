#include <iostream>

using namespace std;

//функции ввод\вывод массива
void input(int** arr, int rw, int cl);
void output(int** arr, int rw, int cl);

int main()
{
    int** arr, rw = 0;
    cout << "Enter the number of columns and rows - ";
    cin >> rw;

    //создание
    arr = new int* [rw];
    for (int i = 0; i < rw; i++)
    {
        arr[i] = new int[rw];
    }
    input(arr, rw, rw);
    output(arr, rw, rw);

    //инвертирование по диагонали
    cout << "Calculating...\n";
    for (int i = 0; i < rw - 1; i++)
    {
        for (int j = i; j < rw - 1; j++)
        {
            int buf = arr[i][j + 1];
            arr[i][j + 1] = arr[j + 1][i];
            arr[j + 1][i] = buf;
        }
    }
    cout << "Done!\n";
    output(arr, rw, rw);

    //удаление
    for (int i = 0; i < rw; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

void output(int **arr, int rw, int cl)
{
    cout << "\n";
    for (int i = 0; i < rw; i++)
    {
        cout << "| ";
        for (int j = 0; j < cl; j++)
        {
            if (arr[i][j] < 0 || arr[i][j] >= 10)
                cout << arr[i][j] << " | ";  //ровные грани
            else
                cout << arr[i][j] << "  | ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void input(int** arr, int rw, int cl)
{
    for (int i = 0; i < rw; i++)
    {
        for (int j = 0; j < cl; j++)
        {
            cout << "-> ";
            cin >> arr[i][j];
        }
    }
}
 
