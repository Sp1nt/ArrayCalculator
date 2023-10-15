#include "ArrayDataException.h"

ArrayDataException::ArrayDataException(string m, int r, int c) : Exception(m)
{
	cout << "[" << r << "] [" << c << "]";
}

string ArrayDataException::GetMessage() const
{
	return m_message;
}
