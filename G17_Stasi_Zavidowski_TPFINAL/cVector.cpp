#include "cVector.hpp"
template <class T>
std::ostream& operator<<(std::ostream& out, const cVector<T>& element)
{
	for( int i=0; i<element.size(); i++)
	out << element[i]<< std::endl;
	return out;
}
