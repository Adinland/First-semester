#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    char buffch;
    cout << "\tExercise 1:\n";
    getline(cin, str);
    str = str.substr(1);
    cout << str << endl;
    cout << "\tExercise 2:\n";
    for (int i = 0, j = str.length() - 1; i < (str.length() / 2); i++, j--)
    {
        buffch = str[i];
        str[i] = str[j];
        str[j] = buffch;
    }
    cout << str << endl;

    return 0;
}