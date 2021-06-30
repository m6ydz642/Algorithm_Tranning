#include "pch.h"
#include "CppUnitTest.h"
#include "../Algorithm_Tranning/1093.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My1093UnitTest
{
	TEST_CLASS(My1093UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			member a;
			Assert::IsTrue(a.CallNumberTest(10000)); // 정상 범위 1~10000
		}

		TEST_METHOD(TestMethod2)
		{
			member a;
			Assert::IsTrue(a.CallNumberTest(10001)); // 범위 초과
		}

		TEST_METHOD(TestMethod3)
		{
			member a;
			Assert::IsTrue(a.CallNumberTest(0)); // 범위 미달
		}

		TEST_METHOD(TestMethod4)
		{
			member a;
			Assert::IsTrue(a.CallNumberTest(5000)); // 정상 범위 1~10000

		}

	};
}
