#include <iostream>

using namespace std;

class Car {
protected:
    string company, model;
public:
    Car() { cout << "Car is created\n"; }
    ~Car() {}
};

class PassengerCar : virtual public Car {
public:
    PassengerCar() { cout << "PassengerCar is created\n"; }
    ~PassengerCar() {}
    PassengerCar(string c, string m) { company = c; model = m; }
};

class Bus : virtual public Car {
public:
    Bus() { cout << "Bus is created\n"; }
    ~Bus() {}
    Bus(string c, string m) { company = c; model = m; }
};

class Minivan : public PassengerCar, Bus {
public:
    Minivan() { cout << "Minivan is created\n"; }
    ~Minivan() {}
    Minivan(string c, string m) { company = c; model = m; cout << company << endl << model << endl; }
};

int main() {
    Minivan m("Lexus", "M63");

    return 0;
}