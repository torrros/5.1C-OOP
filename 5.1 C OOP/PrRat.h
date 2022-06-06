/////////////////////////PrRat.h
#pragma once
#include "Rational.h"
class PrRat: private Rational
{
public:
	PrRat(const PrRat& pr);
	PrRat(int a = 1, int b = 1) : Rational(a, b) {};
	PrRat& operator=(const PrRat& pr);

	friend istream& operator>>(istream& in, PrRat& pr);
	friend ostream& operator<<(ostream& out, const PrRat& pr);
	operator string () const;

	friend Rational operator/ (const PrRat& pr1, const PrRat& pr2);
	friend bool	operator== (const PrRat& r1, const PrRat& r2);
	friend bool	operator> (const PrRat& r1, const PrRat& r2);
	friend bool	operator< (const PrRat& r1, const PrRat& r2);
};

