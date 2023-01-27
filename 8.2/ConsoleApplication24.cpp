#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Divide(int n) {
    try {
        if (n == 0)
            throw (n);
        else
            cout << (1024 / n) << endl;
    }
    catch (int n1) {
        cout << "Error: cant divide to " << n1 << endl;
    }
};

class FileWasNotOpenedException : exception {
private:
    
public:
    FileWasNotOpenedException() {}
    ~FileWasNotOpenedException() {}
    string Show() { return "Something was wrong when opening file\n"; }
};

void ReadFromFile(string path) {
    ifstream file(path);
    if (file.is_open() != true)
        throw FileWasNotOpenedException();
    else {
        for (string s; getline(file, s);)
            cout << s << endl;
        cout << endl;
        file.close();
    }
}

int main()
{
    int number;
    cout << "\tExercise 1:\nEnter divider - "; cin >> number;
    Divide(number);
    cout << "\tExercise 2:\n";
    string path{"text.txt"};
    try {
        ReadFromFile(path);
    }
    catch (FileWasNotOpenedException er) {
        cout << er.Show();
    }
    cout << "\tExercise 3:\nEnter a expression: ";
    string str;
    int result1 = 0, result2 = 0;
    cin >> str;
    try {
        result1 = stoi(str.substr(str.find_first_not_of("+-*/")));
        result2 = stoi(str.substr(str.find_first_of("+-*/") + 1));
        if (str.substr(str.find_first_of("+-*/"), 1) == "+")
            cout << "Result = " << result1 + result2 << endl;
        else if (str.substr(str.find_first_of("+-*/"), 1) == "-")
            cout << "Result = " << result1 - result2 << endl;
        else if (str.substr(str.find_first_of("+-*/"), 1) == "*")
            cout << "Result = " << result1 * result2 << endl;
        else if (str.substr(str.find_first_of("+-*/"), 1) == "/")
            cout << "Result = " << result1 / result2 << endl;
        //cout << str.substr(str.find_first_of("+-*/"), 1) << endl;
    }
    catch (exception) {
        cout << "Error: invalid expression!" << endl;
    }
    //cout << result1 << endl;
    //cout << result2 << endl;
    return 0;
}