#include "pch.h"
#include "CppUnitTest.h"
#include "../5.4/5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int K = 2;
			const int i = 1;
			int finale = S1(K,i);
			Assert::AreEqual(finale, 119952);
			
		}
	};
}
