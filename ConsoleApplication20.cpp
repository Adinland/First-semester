#include <iostream>
#include <ctime>

using namespace std;

void input(int* arr, int n);
void output(int* arr, int n);

int main()
{
    int* arr1, * arr2, n1, n2;
    srand(time(NULL));

    cout << "Enter the nubmer of first array - ";
    cin >> n1;
    cout << "then second array - ";
    cin >> n2;
    arr1 = new int[n1];
    arr2 = new int[n2];
    input(arr1, n1);
    input(arr2, n2);
    output(arr1, n1);
    output(arr2, n2);
    delete[] arr1;
    delete[] arr2;
    return 0;
}

void input(int* arr, int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 10;
}

void output(int* arr, int n)
{
    cout << "\n| ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " | ";
    cout << endl;
}
