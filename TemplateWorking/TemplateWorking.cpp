// ObjectsPassReturning.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "IntNumber.h"
#include <iostream>
#include "DynamicArray.h"

int main()
{
	//IntNumber intNumber1;
	//IntNumber intNumber2;
	//std::cin >> intNumber1;
	//std::cin >> intNumber2;
	//IntNumber suma = intNumber1 + intNumber2;
	//IntNumber minus = intNumber1 - intNumber2;
	//IntNumber product = intNumber1 * intNumber2;
	//IntNumber division = intNumber1 / intNumber2;
	//std::cout << "a+b= "<<suma;
	//std::cout << "a-b= "<<minus;
	//std::cout << "a*b= " << product;
	//std::cout << "a/b= " << division;
	//std::cout << "a++" << ++intNumber1;
	//std::cout << "b--" << intNumber2--;

	int mas[10] = { 1,2,3,4,5,6,7,8,9,10 };
	DynamicArray<int> da(mas, 10);
	for (int i = 0; i < da.GetLength(); i++)
		std::cout << da.GetElements()[i] << std::endl;
	return 0;
}