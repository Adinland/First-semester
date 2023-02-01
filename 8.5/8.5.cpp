#include <iostream>

using namespace std;

class Figure {
public:
    Figure() {}
    ~Figure() {}
    virtual void area() {}
};


//параллелограмм и наследники
class Parallelogram : public Figure {
protected:
    float A, B, a;
public:
    Parallelogram() { A = 0; B = 0; a = 0; }
    ~Parallelogram() {}
    Parallelogram(float a, float b, float c) { A = a; B = b; this->a = c; }
    void area() { cout << "Area of Parallelogram is " << A * B * sin(a) << endl; }
};

class Rectangle : public Parallelogram {
public:
    Rectangle() {}
    ~Rectangle() {}
    Rectangle(float a, float b) { A = a; B = b; }
    void area() { cout << "Area of Rectangle is " << A * B << endl; }
};

class Square : public Parallelogram {
protected:
public:
    Square() {}
    ~Square() {}
    Square(float a) { A = a; B = a; }
    void area() { cout << "Area of Square is " << A * B << endl; }
};

class Rhombus : public Parallelogram {
public:
    Rhombus() {}
    ~Rhombus() {}
    Rhombus(float a, float b) { A = a; B = a; this->a = b; }
    void area() { cout << "Area of Rhombus is " << A * B * sin(a) << endl; }
};

//круг и наследники
class Circle : public Figure {
protected:
    float r;
public:
    Circle() { r = 0; }
    ~Circle() {}
    Circle(float r) { this->r = r; }
    void area() { cout << "Area of Circle is " << ((3, 141 * 3, 141) * r) << endl; }
};

int main()
{
    Parallelogram p(2, 3, 45);
    Rectangle r(2, 3);
    Square s(5);
    Rhombus rs(4, 45);
    Circle c(4);
    Figure* f[5] = {&p, &r, &s, &rs, &c};
    for (int i = 0; i < 5; i++)
        f[i]->area();

    return 0;
}