#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "\tExercise 1:\n";
    string str;
    getline(cin, str);
    cout << str[1] << endl;

    cout << "\tExercise 2:\n";
    cout << str[str.length()];
    int ch1 = 0, ch2 = 0;
    //проверка на правильность диапазона
    for (bool ext = false; ext != true;)
    {
        cout << "Which elements will be swap?\n";
        cin >> ch1 >> ch2;
        if ((ch1 > str.length() || ch1 < 0) || (ch2 > str.length() || ch2 < 0))
            cout << "Ooops, the number is more than the number of symbols. Try symbols from 1 to " << str.length() << "\n";
        else if (ch1 < 0 || ch2 < 0)
            cout << "Ooops, the number is less than the number of symbols. Try symbols from 1 to " << str.length() << "\n";
        else
        {
            ch1--;
            ch2--;
            ext = true;
        }
    }
    //меняем местами буквы
    char buff;
    buff = str[ch1];
    str[ch1] = str[ch2];
    str[ch2] = buff;
    cout << str;

    cout << "\tExercise 3:\n";
    //проверка на правильность диапазона
    for (bool ext = false; ext != true;)
    {
        cout << "Which element will be delete?\n";
        cin >> ch1;
        if (ch1 > str.length() || ch1 < 0)
            cout << "Ooops, the number is more than the number of symbols. Try symbols from 1 to " << str.length() << "\n";
        else if (ch1 < 0 || ch2 < 0)
            cout << "Ooops, the number is less than the number of symbols. Try symbols from 1 to " << str.length() << "\n";
        else
        {
            ch1--;
            ext = true;
        }
    }
    //удаляем
    str = str.substr(0, ch1) + str.substr(ch1 + 1);
    cout << str;

    return 0;
}
