#include "pch.h"
#include "CppUnitTest.h"
#include "../lab4.2/Figure.h"
#include "../lab4.2/Figure.cpp"
#include "../lab4.2/Square.h"
#include "../lab4.2/Square.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Square t(1);
			Assert::AreEqual(1.0, t.getSide());
		}
	};
}
