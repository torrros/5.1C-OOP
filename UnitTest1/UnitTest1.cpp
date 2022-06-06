#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\5.1 C OOP\5.1 C OOP\Rational.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational p{ 1,2 };
			p--;
			Assert::AreEqual(p.geta(), 0);
		}
	};
}
