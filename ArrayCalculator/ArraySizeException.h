#pragma once
#include <iostream>
#include <string>
#include "Exception.h"

using namespace std;
class ArraySizeException : public Exception
{
public:
	ArraySizeException(string m_message);
	string getMessage() const;
};

