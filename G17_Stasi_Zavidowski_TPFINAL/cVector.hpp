#pragma once
#include <vector>
#include <iostream>
template <class T>
class cVector : public std::vector <T> {
public:
	void operator+(T element);
	void operator-(T element);
	friend std::ostream& operator<<(std::ostream& out, const cVector<T>& element);
};

template<class T>
inline void cVector<T>::operator+(T element)
{
	this->push_back(element);
}

template<class T>
inline void cVector<T>::operator-(T element)
{
	this->erase(element);
}

