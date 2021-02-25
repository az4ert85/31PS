#pragma once
#include<iostream>

template<typename T>
class DynamicArray
{
private:
	T* elements;
	int length;
	int size;
public:
	DynamicArray(int size=10);
	DynamicArray(T* elements, int length);
	DynamicArray(const DynamicArray& da);
	DynamicArray operator=(const DynamicArray& da);
	T* GetElements();
	~DynamicArray();

	bool AddElement(const T& element);
	bool EditElement(int index, const T& newElement);
	bool DeleteElement(int index);
	int GetLength();
};

template<typename T>
DynamicArray<T>::DynamicArray(int size = 10)
{
	elements = new T[size];
	this->size = size;
	this->length = 0;
}

template<typename T>
DynamicArray<T>::DynamicArray(T* data, int length)
{
	elements = new T[length + 10];
	this->size = length + 10;
	for (int i = 0; i < length; i++)
		AddElement(data[i]);
}

template<typename T>
DynamicArray<T>::DynamicArray(const DynamicArray & da)
{
	elements = new T[da.size];
	size = da.size;
	length = da.length;
}

template<typename T>
DynamicArray<T>  DynamicArray<T>::operator=(const DynamicArray & da)
{
	if (this == &da)
		return *this;
	delete[] this->elements;
	elements = new T[da.size];
	size = da.size;
	length = da.length;
	for (int i = 0; i < length; i++)
		elements[i] = da.elements[i];
	return *this;
}

template<typename T>
T* DynamicArray<T>::GetElements()
{
	return elements;
}

template<typename T>
DynamicArray<T>::~DynamicArray()
{
	delete[] this->elements;
}

template<typename T>
bool DynamicArray<T>::AddElement(const T& element)
{
	if (length == size)
		return false;
	elements[length] = element;
	length++;
	return true;
}

template<typename T>
bool DynamicArray<T>::EditElement(int index, const T& element)
{
	if (index >= length)
		return false;
	elements[index] = element;
	return true;
}

template<typename T>
bool DynamicArray<T>::DeleteElement(int index)
{
	if (index >= length)
		return false;
	for (int i = index; i < length - 1; i++)
		elements[i] = elements[i + 1];
	length--;
	return true;
}

template<typename T>
int DynamicArray<T>::GetLength()
{
	return length;
}



