#include <iostream>

using namespace std;

class Function {
public:
    virtual void f() {
        cout << "Function" << endl;
    }

};

class Ellipse : public Function {
    virtual void f() {
        cout << "Ellipse" << endl;
    }
};

class Hiperbola : public Function {
    virtual void f() {
        cout << "Hiperbola" << endl;
    }
};

class Parabola : public Function {
    virtual void f() {
        cout << "Parabola" << endl;
    }
};

void GetF(Function* f) {
    f->f();
}

int main()
{
    Function* func;
    Ellipse elip;
    Hiperbola hip;
    Parabola paral;

    func = &elip;
    func->f();
    GetF(func);

    func = &hip;
    func->f();
    GetF(func);

    func = &paral;
    func->f();
    GetF(func);
    return 0;
}