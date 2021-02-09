// ObjectsPassReturning.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "IntNumber.h"
#include <iostream>


int main()
{
	int number1, number2;
	std::cout << "Enter two number\n";
	std::cin >> number1 >> number2;
	IntNumber intNumber1 = number1;
	IntNumber intNumber2 = number2;

	IntNumber greaterNumber = intNumber1.GetGreater(&intNumber2);
	IntNumber lessNumber = intNumber1.GetLess(&intNumber2);

	greaterNumber.Write();
	lessNumber.Write();
	return 0;
}

