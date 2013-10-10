#include <iostream>
#include <string>
#include <sstream>
#include "Class1.h"

Class1::Class1()
  : m_nData(0)
{


}

Class1::Class1(int i)
  : m_nData(i)
{


}

Class1::~Class1()
{

}

std::string Class1::ToString()
{
  std::stringstream fmt;
  fmt << "Class1(" << this << ")";

  return fmt.str();
}

void Class1::DoWork()
{


}
