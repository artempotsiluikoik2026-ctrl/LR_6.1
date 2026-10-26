#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1 іт/6.1 іт.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test61
{
	TEST_CLASS(test61)
	{
	public:

		TEST_METHOD(TestCount)
		{
			int c[7] = { 5, -3, 4, -2, 0, 8, -7 };
			int result = Count(c, 7);
			Assert::AreEqual(5, result);
		}

		TEST_METHOD(TestSum)
		{
			int c[7] = { 5, -3, 4, -2, 0, 8, -7 };
			int result = Sum(c, 7);
			Assert::AreEqual(7, result);
		}

		TEST_METHOD(TestZero)
		{
			int c[7] = { 5, -3, 4, -2, 0, 8, -7 };
			int expected[7] = { 0, 0, 0, -2, 0, 0, 0 };
			Zero(c, 7);
			for (int i = 0; i < 7; i++)
				Assert::AreEqual(expected[i], c[i]);
		}

		TEST_METHOD(TestCreate_Range)
		{
			int c[27];
			Create(c, 27, -35, 25);
			for (int i = 0; i < 27; i++)
			{
				Assert::IsTrue(c[i] >= -35);
				Assert::IsTrue(c[i] <= 25);
			}
		}
	};
}

