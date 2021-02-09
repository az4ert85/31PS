#pragma once
#include<iostream>
class IntNumber
{
	int number;
public:
	IntNumber();
	IntNumber(int number);
	
	IntNumber GetGreater(IntNumber* intNumber) const;
	IntNumber GetLess(IntNumber* intNumber) const;
	void Write()
	{
		std::cout << "Number " << number << "\n";
	}
	IntNumber operator+(const IntNumber& intNumber);
	IntNumber operator-(const IntNumber& intNumber);
	IntNumber operator*(const IntNumber& intNumber);
	IntNumber operator/(const IntNumber& intNumber);
	~IntNumber();
};

