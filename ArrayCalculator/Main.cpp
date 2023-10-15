#include "ArraySizeException.h"
#include "ArrayDataException.h"
#include "ArrayValueCalculator.h"
#include <iostream>

using namespace std;

int main() {

	ArrayValueCalculator a;

	try
	{

		a.Input();

		if (a.GetRows() != 4 || a.GetCols() != 4)
		{
			throw ArraySizeException("Size only 4x4!");
		}

		cout << endl << endl;

		a.Print();
		cout << endl << endl;
		
		cout << "Result: " << a.doCalc();

	}
	catch (ArraySizeException excepSize)
	{
		cout << excepSize.GetMessage() << endl;
	}
	catch (ArrayDataException excepData) {
		cout << excepData.GetMessage() << endl;
	}
}