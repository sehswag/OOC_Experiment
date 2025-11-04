#include <iostream>
using namespace std;

// Function overloads for calculating area
int area(int s)              // Area of square
{
    return s * s;
}
int area(int l, int b)       // Area of rectangle
{
    return l * b;
}
float area(float r)          // Area of circle
{
    return 3.14f * r * r;
}
float area(float bs, float ht) // Area of triangle
{
    return (bs * ht) / 2;
}

int main()
{
    int s, l, b;
    float r, bs, ht;

    cout << "Name: Sujal Kambale\n";
    cout << "Div: B\n";
    cout << "Roll no.: 105\n";

    cout << "\nEnter side of a square:\n";
    cin >> s;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Enter base and height of triangle: ";
    cin >> bs >> ht;

    cout << "Area of square is " << area(s);
    cout << "\nArea of rectangle is " << area(l, b);
    cout << "\nArea of circle is " << area(r);
    cout << "\nArea of triangle is " << area(bs, ht);

    return 0;
}


