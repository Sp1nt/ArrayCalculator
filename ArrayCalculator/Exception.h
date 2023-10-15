#pragma once
#include <string>

using namespace std;

class Exception
{
protected:

   string m_message;

public:

    Exception(string m);

    // virt metod
    virtual string GetMessage() const;
};

