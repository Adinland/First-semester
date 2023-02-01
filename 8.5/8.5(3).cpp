#include <iostream>

using namespace std;

class Fraction {
public:
    int numerator, denominator;
public:
    Fraction() { numerator = 1; denominator = 1; }
    ~Fraction() {}
    Fraction(int n, int d) {
        if (d == 0)
            throw invalid_argument("Cannot divide to 0!");
        else {
            numerator = n;
            denominator = d;
        }
    }
    void Get() { cout << numerator << "/" << denominator << endl; }
    Fraction operator+(Fraction& f2) {
        Fraction f;
        f.denominator = this->denominator * f2.denominator;
        f.numerator = (this->numerator * f2.denominator) + (this->denominator * f2.numerator);
        return f;
    }
    Fraction operator-(Fraction& f2) {
        Fraction f;
        f.denominator = this->denominator * f2.denominator;
        f.numerator = (this->numerator * f2.denominator) - (this->denominator * f2.numerator);
        return f;
    }
    Fraction operator*(Fraction& f2) {
        Fraction f;
        f.denominator = this->denominator * f2.denominator;
        f.numerator = this->numerator * f2.numerator;
        return f;
    }
    Fraction operator/(Fraction& f2) {
        Fraction f;
        f.denominator = this->denominator * f2.numerator;
        f.numerator = this->numerator * f2.denominator;
        return f;
    }
    Fraction operator-() {
        this->numerator = -this->numerator;
        this->denominator = -this->denominator;
        return *this;
    }
    bool operator==(Fraction& f2) {
        if ((this->numerator * f2.denominator) == (this->denominator * f2.numerator))
            return true;
        else
            return false;
    }
    bool operator!=(Fraction& f2) {
        if ((this->numerator * f2.denominator) == (this->denominator * f2.numerator))
            return false;
        else
            return true;
    }
    bool operator>(Fraction& f2) {
        if ((this->numerator * f2.denominator) <= (this->denominator * f2.numerator))
            return false;
        else
            return true;
    }
    bool operator<(Fraction& f2) {
        if ((this->numerator * f2.denominator) >= (this->denominator * f2.numerator))
            return false;
        else
            return true;
    }
};

int main() {
    try {
        Fraction fract1(2, 3), fract2(2, 4);
        cout << "fract1 = "; fract1.Get();
        cout << "fract2 = "; fract2.Get();
        cout << "addition" << endl;
        Fraction fract3 = fract1 + fract2;
        fract3.Get();
        cout << "subtraction" << endl;
        fract3 = fract1 - fract2;
        fract3.Get();
        cout << "multiplication" << endl;
        fract3 = fract1 * fract2;
        fract3.Get();
        cout << "division" << endl;
        fract3 = fract1 / fract2;
        fract3.Get();
        -fract3;
        fract3.Get();
        if (fract1 == fract2)
            cout << "fract1 = fract2!\n";
        else
            cout << "fract1 != fract2!\n";

        if (fract1 != fract2)
            cout << "fract1 != fract2!\n";
        else
            cout << "fract1 = fract2!\n";

        if (fract1 > fract2)
            cout << "fract1 > fract2!\n";
        else
            cout << "fract1 <= fract2!\n";

        if (fract1 < fract2)
            cout << "fract1 < fract2!\n";
        else
            cout << "fract1 >= fract2!\n";


    }
    catch (invalid_argument e) {
        cout << e.what() << endl;
        return 0;
    }
    
    return 0;
}