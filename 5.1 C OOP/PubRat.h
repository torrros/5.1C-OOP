/////////////////////////PubRat.h
#pragma once
#include "Rational.h"
class PubRat: public Rational 
{
	PubRat(int a = 1, int b = 1) : Rational(a, b) {}
	PubRat(const PubRat const& pr);
	PubRat& operator=(const PubRat& pr);
};

