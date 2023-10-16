#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_5.1/lab_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab51
{
	TEST_CLASS(UnitTestlab51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = h(0, 1);
			Assert::AreEqual(t, 1);
		}
	};
}
