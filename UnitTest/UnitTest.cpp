#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_6.2_ITER/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestSumOddIndexedElements)
		{
			// Arrange
			const int size = 5;
			int arr[size] = { 1, 2, 3, 4, 5 };

			// Act
			int result = sumOddIndexedElements(arr, size);

			// Assert
			Assert::AreEqual(6, result);
		}
	};
}
