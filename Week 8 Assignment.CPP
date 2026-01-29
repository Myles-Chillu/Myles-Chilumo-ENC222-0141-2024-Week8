#include <iostream>
using namespace std;

class Square {
protected:
    double side;

public:
    Square(double s) {
        side = s;
        cout << "Square constructor called" << endl;
    }

    double getPeri() {
        return 4 * side;
    }

    double getArea() {
        return side * side;
    }

    ~Square() {
        cout << "Square destructor called" << endl;
    }
};

class Cube : public Square {
public:
    Cube(double s) : Square(s) {
        cout << "Cube constructor called" << endl;
    }

    double getArea() {
        return 6 * side * side;
    }

    double getVolume() {
        return side * side * side;
    }

    ~Cube() {
        cout << "Cube destructor called" << endl;
    }
};

int main() {
    double s;
    cout << "Enter side length: ";
    cin >> s;

    Cube c(s);

    cout << "Square Perimeter: " << c.getPeri() << endl;
    cout << "Square Area: " << Square::getArea() << endl;
    cout << "Cube Surface Area: " << c.getArea() << endl;
    cout << "Cube Volume: " << c.getVolume() << endl;

    return 0;
}