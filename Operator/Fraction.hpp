#pragma once
#include<iostream>

using namespace std;
class Fraction{
private:

int moneh_;
int mkhneh_;

void reduce(Fraction &a);


public:
Fraction():moneh_(0),mkhneh_(1){}
Fraction(int a, int b):moneh_(a),mkhneh_(b){
}

friend Fraction operator +(const Fraction &a,const Fraction &b);
 friend Fraction operator -(const Fraction &a,const Fraction &b);
friend Fraction operator *(const Fraction &a,const Fraction &b);
friend Fraction operator /(const Fraction &a,const Fraction &b);

 bool operator ==(const Fraction&a)const;
 bool operator !=(const Fraction&a);

Fraction operator++(int);//x++
Fraction& operator++();//++x

friend ostream& operator <<(ostream&os,const Fraction &f);
friend istream& operator >>(istream&input,Fraction &f);
friend Fraction operator % 	(const Fraction &f1, const Fraction &f2);// Bad One
};