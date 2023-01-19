#include <iostream>
#include <ctime>

using namespace std;

//функции ввод\вывод массива
void input(int** arr, int rw, int cl);
void output(int** arr, int rw, int cl);

int main()
{
    int** arr, rw = 0, cl = 0;
    srand(time(NULL));

    cout << "Enter the number of columns - ";
    cin >> cl;
    cout << "then rows - ";
    cin >> rw;
    //инициализация
    arr = new int* [rw];
    for (int i = 0; i < rw; i++)
    {
        arr[i] = new int[cl];
    }
    input(arr, rw, cl);
    output(arr, rw, cl);
    //сортировка
    cout << "\tExercise 1:\nSorting...\n";
    for (int i = 0, buff = 0; i < rw; i++)
    {
        for (int j = 0; j < cl; j++)
        {
            for (int k = j; arr[i][k] < arr[i][k - 1] && k >= 0; k--)
            {
                buff = arr[i][k - 1];
                arr[i][k - 1] = arr[i][k];
                arr[i][k] = buff;
            }
        }
        
    }
    cout << "Done!\n";
    output(arr, rw, cl);
    //меняет местами
    cout << "\tExercise 2:\nSwapping...\n";
    for (int i = 0; i < rw; i++)
    {
        int buff = arr[i][cl - 1];
        arr[i][cl - 1] = arr[i][0];
        arr[i][0] = buff;
    }
    cout << "Done!\n";
    output(arr, rw, cl);
    //удаление
    for (int i = 0; i < rw; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}

void output(int** arr, int rw, int cl)
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
            arr[i][j] = rand() % 10;
    }
}