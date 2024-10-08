#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator + (const Complex &obj) {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex num1(3, 4), num2(1, 2);
    Complex result = num1 + num2;

    cout << "Sum of ";
    num1.display();
    cout << "and ";
    num2.display();
    cout << "is ";
    result.display();

    return 0;
}

