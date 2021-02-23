#pragma once
#include<iostream>
class IntNumber
{
	int number;
	static int count;
public:
	IntNumber();
	IntNumber(int number);
	IntNumber(const IntNumber& n);
	int GetNumber() 
	{
		return number;
	}
	IntNumber operator+(const IntNumber& intNumber);
	IntNumber operator-(const IntNumber& intNumber);
	IntNumber operator*(const IntNumber& intNumber);
	IntNumber operator/(const IntNumber& intNumber);
	friend std::ostream& operator<<(std::ostream& os, const IntNumber& intNumber);
	friend std::istream& operator >> (std::istream& is, IntNumber& intNumber);
	IntNumber operator++();//префіксна форма
	IntNumber operator++(int n);//постфіксна форма
	IntNumber operator--();//префіксна форма
	IntNumber operator--(int n);//постфіксна форма
	~IntNumber();
};

