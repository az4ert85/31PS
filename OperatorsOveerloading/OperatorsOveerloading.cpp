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
	IntNumber suma= intNumber1 + intNumber2;
	IntNumber minus = intNumber1 - intNumber2;
	IntNumber product = intNumber1 * intNumber2;
	IntNumber division = intNumber1 / intNumber2;
	
	suma.Write();
	minus.Write();
	product.Write();
	division.Write();

	/*IntNumber greaterNumber = intNumber1.GetGreater(&intNumber2);
	IntNumber lessNumber = intNumber1.GetLess(&intNumber2);

	greaterNumber.Write();
	lessNumber.Write();*/
	return 0;
}

