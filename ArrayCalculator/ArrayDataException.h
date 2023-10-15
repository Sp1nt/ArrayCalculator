#pragma once
#include <iostream>
#include "Exception.h"

using namespace std;

class ArrayDataException : public Exception
{
public:
	ArrayDataException(string, int r, int c);
	string GetMessage() const;

};

