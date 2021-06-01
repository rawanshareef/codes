#include "Fraction.hpp"

#include <iostream>
using namespace std;
int main()
{
    Fraction a(2, 3);
    Fraction b;
    Fraction c(1, 2);
    Fraction e(1, 2);

    cout << "the a is:" << a << endl;              //(2/3)
    cout << "the b is:" << b << endl;              //(0/1)
    cout << "the ans:" << operator+(a, c) << endl; //(7/6)
    cout << "the ans:" << operator-(a, c) << endl; //(1/6)
    cout << "the ans:" << operator-(c, a) << endl; //(-1/6)
    cout << "the new:" << operator*(c, a) << endl; //(2/6)
     
    cout << "the ans:" << operator/(c, a) << endl; //(3/4)
    if (a == c)
    {
        cout << "yess" << endl;
    }

    if(a!=c)
    {
        cout << "Noooo" << endl;
        ;
    }
    if (e == c)
    {
        cout << "yess" << endl;
    }
    else
    {
        cout << "Noooo" << endl;
        
    }


}