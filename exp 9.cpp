#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 1, int i = 0)
    {
        real = r;
        imag = i;
    }
    friend ostream & operator << (ostream &out, const Complex &c);
    friend istream & operator >> (istream &in, Complex &c);
};

ostream & operator << (ostream &out, const Complex &c)
{
    out << c.real;
    out << "+i" << c.imag << endl;
    return out;
}

istream & operator >> (istream &in, Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imaginary Part ";
    in >> c.imag;
    return in;
}

int main()
{
	cout << "Name: Sujal Kambale\n";
    cout << "Div: B\n";
    cout << "Roll no.: 105\n";
    Complex c1;
    cin >> c1;
    cout << "\nThe complex object is ";
    cout << c1;
    return 0;
}

