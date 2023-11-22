#include "pch.h"
#include "CppUnitTest.h"
#include "../dod.h"
#include "../var.h"
#include "../dod.cpp"
#include "../var.cpp"

using namespace nsDod;
using namespace nsVar;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestDod)
		{
			x = 1;
			n = 0;
			a = 1.0;

			dod();

			Assert::AreEqual(a, 0, 0.1);

		}
	};
}
