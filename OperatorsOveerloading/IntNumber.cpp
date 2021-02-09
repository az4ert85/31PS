#include "stdafx.h"
#include "IntNumber.h"
#include "iostream"

IntNumber::IntNumber()
{
	number = 0;
}

IntNumber::IntNumber(int number)
{
	this->number = number;
}

IntNumber::IntNumber(const IntNumber& intNumber)
{
	std::cout << "Copy constructor";
	number = intNumber.number;
}

IntNumber IntNumber::GetGreater(IntNumber* number) const
{
	if (number->number < this->number)
		return *this;
	return *number;
}

IntNumber IntNumber::GetLess(IntNumber* number) const
{
	if (number->number > this->number)
		return *this;
	return *number;
}

IntNumber::~IntNumber()
{
}
