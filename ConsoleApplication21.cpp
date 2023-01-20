#include <iostream>

using namespace std;

int my_sqrt(int in);
void my_sqrt(int in, int& out);
void my_sqrt(int in, int* out);

int main()
{
    int in = 0, out = 0, out1 = 0;
    cout << "Enter the number - ";
    cin >> in;
    //функция возвращает значение
    cout << "First function:\n";
    if (my_sqrt(in) == 0)
        cout << "No root\n";
    else
        cout << "Root - " << my_sqrt(in) << endl;
    //функция ссылка
    cout << "Second function:\n";
    my_sqrt(in, out);
    if (out == 0)
        cout << "No root\n";
    else
        cout << "Root - " << out << endl;
    //функция указатель
    cout << "Third function:\n";
    my_sqrt(in, &out1);
    if (out1 == 0)
        cout << "No root\n";
    else
        cout << "Root - " << out1 << endl;

    return 0;
}

//функция возвращает значение
int my_sqrt(int in)
{
    for (int i = 1; i < in - 1; i++)
    {
        if (((in / i) == i) && ((in % i) == 0))
            return i;
    }
    return 0;
}

//функция ссылка
void my_sqrt(int in, int& out)
{
    for (int i = 1; i < in - 1; i++)
    {
        if (((in / i) == i) && ((in % i) == 0))
        {
            out = in / i;
            break;
        }
    }
}

//функция указатель
void my_sqrt(int in, int *out)
{
    for (int i = 1; i < in - 1; i++)
    {
        if (((in / i) == i) && ((in % i) == 0))
        {
            *out = in / i;
            break;
        }
    }
}