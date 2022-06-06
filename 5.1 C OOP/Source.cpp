/////////////////////////Source.cpp
#include "PrRat.h"
#include "PubRat.h"
#include "Rational.h"
#include <iostream>

using namespace std;

int main ()
{
	try
	{

		PrRat pr, p{ 1,8 };
		cin >> pr;
		cout << pr / p << endl;
		if (pr == p)
			cout << "Equal";
		else
			cout << "Not equal";
		cout << endl;

		if (pr > p)
			cout << "Great";
		else
			cout << "Less";
		cout << endl;

		if (pr < p)
			cout << "Great";
		else
			cout << "Less";
		cout << endl;
		Rational a;
		cout << a++ << endl;
		cout << ++a << endl;
		cout << a-- << endl;
		cout << --a << endl;
	}
	catch (Exception e)
	{
		cout << "Exception - " << e.what() << endl;
	}

	return 0;
}