
#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\user\source\repos\Tilt\testing.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		float x = 1;
		float y = 1;
		float R = (cos(x * acos(-1.0)) / sin(x * acos(-1.0))) - 1 / cos(y);
		float S = tan(x) - log(abs(pow(x, 3) + (pow(y, 3))));
		TEST_METHOD(Positive)
		{
			
			Assert::AreEqual(Calculating(1.0f, 3.0f), -1.7748f);
		}

		TEST_METHOD(Negative)
		{
			Assert::AreEqual(Calculating(-100.0f, -30.0f), -13.2549f);
		}

		TEST_METHOD(LogCorrection)
		{
			auto function = [] { Calculating(0.0f, 0.0f); };
			Assert::ExpectException<std::invalid_argument>(function);
		}
		TEST_METHOD(CtgCorrection)
		{
			auto function = [] { Calculating(0.0f, 1.0f); };
			Assert::ExpectException<std::invalid_argument>(function);
		}
		TEST_METHOD(SvsR)
		{
			Assert::IsTrue(Calculating(x, y) > R);
		}
	};
}
