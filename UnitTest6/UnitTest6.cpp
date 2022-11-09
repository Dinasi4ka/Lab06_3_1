#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab06_3_1/Lab06_3_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest6)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int array[] = { 2,35,40,60,77 };
			int t;
			t = Max(array, 15,0,0);
			Assert::AreEqual(t, 60);
		}
	};
}
