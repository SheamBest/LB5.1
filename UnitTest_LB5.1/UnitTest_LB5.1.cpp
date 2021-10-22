#include "pch.h"
#include "CppUnitTest.h"
#include "..\LB5.1\LB5.1.cpp"
 
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLB51
{
	TEST_CLASS(UnitTestLB51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double tmp = h(0, 1, 2);
			Assert::AreEqual(3. , tmp);
		}
	};
}
