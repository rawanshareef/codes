#include "Fraction.hpp"
using namespace std;

/*void Fraction::reduce(Fraction &a)
{
    int g;
    while (a.moneh_ %= a.mkhneh_)
    {
        int t = a.moneh_;
        a.moneh_ = a.mkhneh_;
        a.mkhneh_ = t;
    }
    g = a.mkhneh_;
    a.moneh_ /= g;
    a.mkhneh_ /= g;
    
}*/

Fraction operator+(const Fraction &a, const Fraction &b)
{
    int x = a.moneh_ * b.mkhneh_ + a.mkhneh_ * b.moneh_;
    int y = a.mkhneh_ * b.mkhneh_;
    return Fraction(x, y);
}
Fraction operator-(const Fraction &a, const Fraction &b)
{
    int x = a.moneh_ * b.mkhneh_ - a.mkhneh_ * b.moneh_;
    int y = a.mkhneh_ * b.mkhneh_;
    return Fraction(x, y);
}
Fraction operator*(const Fraction &a, const Fraction &b)
{
    int x = a.moneh_ * b.moneh_;
    int y = a.mkhneh_ * b.mkhneh_;
   return Fraction(x,y);
  
}
Fraction operator/(const Fraction &a, const Fraction &b)
{
    int x = a.moneh_ * b.mkhneh_;
    int y = a.mkhneh_ * b.moneh_;
    return Fraction(x,y);
}

 bool Fraction::operator ==(const Fraction&a)const{
     return((this->moneh_==a.moneh_)&&(this->mkhneh_==a.mkhneh_));
 }

 bool Fraction::operator !=(const Fraction&a){
return!(*this==a);
 }
 
Fraction operator % (const Fraction &f1, const Fraction &f2)
{
	int nn = f1.moneh_ + f2.moneh_;
	int dd = f2.mkhneh_ + f2.mkhneh_;
	return Fraction (nn, dd);
}
ostream &operator<<(ostream &os, const Fraction &f)
{
    return os << f.moneh_ << '/' << f.mkhneh_;
}
istream &operator>>(istream &input, Fraction &f){
    string s;
    return input >>f.moneh_>>s>>f.mkhneh_;
}
