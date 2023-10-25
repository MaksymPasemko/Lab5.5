#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.5/pr5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = ways(1,2,3,4);
			Assert::AreEqual(t,0);
		}
	};
}
