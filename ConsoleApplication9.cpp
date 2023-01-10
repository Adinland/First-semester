#include <iostream>

using namespace std;

int main()
{
    int sum = 0, min = 0, max = 0, len = 0;
    cout << "Enter the number of elemetns - ";
    for (;len <= 0;)
    {
        cin >> len;
        if (len <= 0)
            cout << "Incorrect number" << endl << "Enter the number of elemetns - ";
    }
    for (int i = 0, n; i < len; i++)
    {
        cout << "-> ";
        cin >> n;
        if (i == 0)
        {
            min = n;
            max = n;
        }
        sum += n;
        if (n > max)
            max = n;
        else if (n < min)
            min = n;
    }

    cout << "Min = " << min << endl << "Max = " << max << endl << "Summ = " << sum << endl << "Average = " << sum / len << endl;

    return 0;
}