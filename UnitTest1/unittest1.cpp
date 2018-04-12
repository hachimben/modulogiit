#include "stdafx.h"
#include "CppUnitTest.h"
#include "iostream"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int nummer = 5;

			if (nummer % 3 == 0)
			{
				std::cout << "Tics" << std::endl;
			}
			else  
			{
				std::cout << "Test Failed" << std::endl;;
			}

			if (nummer % 5 == 0)
			{
				std::cout << "Tac " << std::endl;
			}
			else 
			{
				std::cout << "Test Failed" << std::endl;
			}
			

			system("pause");
			
		}

	};
}