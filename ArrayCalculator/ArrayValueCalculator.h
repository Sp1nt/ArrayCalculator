#pragma once
#include <iostream>
#include <string>
#include "ArraySizeException.h"
#include "ArrayDataException.h"


using namespace std;
class ArrayValueCalculator
{
private:
    string** data;
    int rows;
    int cols;
public:
    ArrayValueCalculator();
    //func for task
    int doCalc();
    void Input();
    void Print();
    //accessories
    int GetRows() const;
    int GetCols() const;
};

