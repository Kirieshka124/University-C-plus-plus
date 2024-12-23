#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\user\source\repos\Tilt\testing.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		float x = 0;
		float y = 1;
		float R = (cos(x * acos(-1.0)) / sin(x * acos(-1.0))) - 1 / cos(y);
		float S = tan(x) - log(abs((x * x * x) + (y * y * y)));
		float test = 0;
		TEST_METHOD(SNothing)
		{
			Assert::AreEqual(S, test);
		}
		TEST_METHOD(RNothing)
		{
			Assert::AreEqual(R, test);
		}
		TEST_METHOD(SvsR)
		{
			Assert::IsTrue(S > R);
		}
	};
}