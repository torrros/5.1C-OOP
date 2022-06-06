/////////////////////////PubRat.cpp
#include "PubRat.h"
#include <iostream>

using namespace std;

PubRat::PubRat(const PubRat& pr)
{
	*this = pr;
}

PubRat& PubRat:: operator=(const PubRat& pr)
{
	seta(pr.geta());
	setb(pr.getb());
	return *this;
}