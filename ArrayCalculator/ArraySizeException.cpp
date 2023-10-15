#include "ArraySizeException.h"

ArraySizeException::ArraySizeException(string m) : Exception(m) {}

string ArraySizeException::getMessage() const
{
	return m_message;
}
