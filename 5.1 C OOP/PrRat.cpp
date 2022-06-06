/////////////////////////PrRat.h
#include "PrRat.h"
#include <iostream>
#include <sstream>

using namespace std;

PrRat::PrRat (const PrRat& pr)
{
	*this = pr;
}

PrRat& PrRat::operator=(const PrRat& pr)
{
	seta(pr.geta());
	setb(pr.getb());
	return *this;
}

PrRat::operator string	() const
{
	stringstream ss;
	ss << "(" << geta() << "/" << getb() << ")";
	return ss.str();
}

istream& operator>>(istream& is, PrRat& pr)
{
	int a, b;
	cout << "a -"; cin >> a;
	cout << "b -"; cin >> b;
	
	if (b==0)
		throw Exception("Can`t cout zero");
	pr.seta(a);
	pr.setb(b);
	return is;
}

ostream& operator<<(ostream& os, const PrRat& pr)
{
	os << string(pr);
	return os;
}

Rational operator/(const PrRat& pr1, const PrRat& pr2)
{
	return (const Rational&)pr1 / (const Rational&)pr2;
};

bool operator == (const PrRat& pr1, const PrRat& pr2)
{
	return (const Rational&)pr1 == (const Rational&)pr2;
}

bool operator> (const PrRat& pr1, const PrRat& pr2)
{
	return (const Rational&)pr1 > (const Rational&)pr2;
}

bool operator< (const PrRat& pr1, const PrRat& pr2)
{
	return (const Rational&)pr1 < (const Rational&)pr2;
}