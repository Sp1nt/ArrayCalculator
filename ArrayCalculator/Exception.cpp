#include "Exception.h"

Exception::Exception(string m)
{
    m_message = m;
}

string Exception::GetMessage() const
{
    return m_message;
}
