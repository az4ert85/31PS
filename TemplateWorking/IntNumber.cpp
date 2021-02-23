#include "stdafx.h"
#include "IntNumber.h"
#include "iostream"


int IntNumber::count = 0;

IntNumber::IntNumber()
{
	number = 0;
	count++;
}

IntNumber::IntNumber(int number)
{
	this->number = number;
	count++;
}

IntNumber::IntNumber(const IntNumber& n)
{
	number = n.number;
	count++;
}

IntNumber::~IntNumber()
{
	std::cout << "Object count " << count << " deleted\n";
	IntNumber::count--;
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

std::ostream& operator<<(std::ostream& os, const IntNumber& number)
{
	os << "Number " << number.number << "\n";
	return os;
}

std::istream& operator >> (std::istream& is, IntNumber& number)
{
	std::cout << "Enter data\n";
	is >> number.number;
	return is;
}

IntNumber IntNumber::operator++()
{
	number++;
	return *this;
}

IntNumber IntNumber::operator++(int n)
{
	IntNumber tmp(number);
	number++;
	return tmp;
}

IntNumber IntNumber::operator--()
{
	number--;
	return *this;
}

IntNumber IntNumber::operator--(int n)
{
	IntNumber tmp(number);
	number--;
	return tmp;
}