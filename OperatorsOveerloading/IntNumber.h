#pragma once
#include<iostream>
class IntNumber
{
	int number;
public:
	IntNumber();
	IntNumber(int number);
	IntNumber(const IntNumber& intNumber);

	IntNumber GetGreater(IntNumber* intNumber) const;
	IntNumber GetLess(IntNumber* intNumber) const;
	void Write()
	{
		std::cout << "Number " << number << "\n";
	}
	~IntNumber();
};

