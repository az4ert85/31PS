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

IntNumber IntNumber::operator+(const IntNumber& intNumber)
{
	IntNumber suma(this->number + intNumber.number);
	return suma;
}
IntNumber IntNumber::operator-(const IntNumber& intNumber)
{
	IntNumber risnytsya(this->number - intNumber.number);
	return risnytsya;
}
IntNumber IntNumber::operator*(const IntNumber& intNumber)
{
	IntNumber product(this->number * intNumber.number);
	return product;
}
IntNumber IntNumber::operator/(const IntNumber& intNumber)
{

	IntNumber division(this->number / intNumber.number);
	return division;
}