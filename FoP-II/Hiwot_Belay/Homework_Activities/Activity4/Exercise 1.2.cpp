#include <iostream>
using namespace std;

struct Complex {
    double real;
    double imaginary;
};

Complex add(const Complex& c1, const Complex& c2);
Complex subtract(const Complex& c1, const Complex& c2);
Complex multiply(const Complex& c1, const Complex& c2);
Complex divide(const Complex& c1, const Complex& c2);

int main() {
    Complex number1;
    Complex number2;

    cout << "Enter the real part of Complex Number 1: ";
    cin >> number1.real;
    cout << "Enter the imaginary part of Complex Number 1: ";
    cin >> number1.imaginary;

    cout << "Enter the real part of Complex Number 2: ";
    cin >> number2.real;
    cout << "Enter the imaginary part of Complex Number 2: ";
    cin >> number2.imaginary;

    Complex addition = add(number1, number2);
    cout << "Addition: " << addition.real << " + " << addition.imaginary << "i" << endl;

    Complex subtraction = subtract(number1, number2);
    cout << "Subtraction: " << subtraction.real << " + " << subtraction.imaginary << "i" << endl;

    Complex multiplication = multiply(number1, number2);
    cout << "Multiplication: " << multiplication.real << " + " << multiplication.imaginary << "i" << endl;

    Complex division = divide(number1, number2);
    cout << "Division: " << division.real << " + " << division.imaginary << "i" << endl;

    return 0;
}

Complex add(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

Complex subtract(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imaginary = c1.imaginary - c2.imaginary;
    return result;
}

Complex multiply(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
    result.imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);
    return result;
}

Complex divide(const Complex& c1, const Complex& c2) {
    Complex result;
    double denominator = (c2.real * c2.real) + (c2.imaginary * c2.imaginary);
    result.real = ((c1.real * c2.real) + (c1.imaginary * c2.imaginary)) / denominator;
    result.imaginary = ((c1.imaginary * c2.real) - (c1.real * c2.imaginary)) / denominator;
    return result;
}
