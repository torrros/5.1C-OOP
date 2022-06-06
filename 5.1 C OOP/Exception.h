/////////////////////////Exception.h
#pragma once
#include<iostream>
#include <exception>
using namespace std;
class Exception: public exception
{
 public:
	Exception(const char* msg) : exception(msg) {}
};


