// constructor = initilizing variable value

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex()
    {
        cout << "inside parameterless ctor init real and imag" << endl;
        real = 0;
        imag = 0;
    }

    Complex(int real, int imag)
    {
        cout << "inside parameterised ctor init real and imag" << endl;
        this->real = real;
        this->imag = imag;
    }
    void acceptRecord()
    {
        cout << "Enter real and imag values";
        cin >> real >> imag;
    }

    void printRecord()
    {
        cout << "Values are = Real: " << real << "\tImag:" << imag << endl;
    }
};

int main()
{

    Complex c1(40, 50); // It will call parameterized ctor
    c1.printRecord();

    return 0;
}