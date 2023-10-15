#include "ArrayValueCalculator.h"

ArrayValueCalculator::ArrayValueCalculator()
{
	rows = 0;
	cols = 0;
	data = nullptr;
}


int ArrayValueCalculator::doCalc() {
	int rez = 0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			try {
				int value = stoi(data[i][j]);
				rez += value;
			}
			catch (...) {
				throw ArrayDataException(" - there is an error in this index!", i, j);
			}
		}
	}

	return rez;
}

void ArrayValueCalculator::Input()
{
	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter cols: ";
	cin >> cols;
	
	data = new string * [rows];
	for (int i = 0; i < rows; i++) {
		data[i] = new string[cols];
	}
	for (int i = 0; i < rows; i++) {
		cout << "Input in array: ";
		for (int j = 0; j < cols; j++) {
			cin >> data[i][j];
		}
	}
}

void ArrayValueCalculator::Print()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << data[i][j] << ' ';
		cout << endl;
	}
}

int ArrayValueCalculator::GetRows() const
{
	return rows;
}

int ArrayValueCalculator::GetCols() const
{
	return cols;
}
