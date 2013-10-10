#include <iostream>
#include <string>
#include <sstream>
#include "Class2.h"

Class2::Class2()
  : m_nData(0)
{


}

Class2::Class2(int i)
  : m_nData(i)
{


}

Class2::~Class2()
{

}

std::string Class2::ToString()
{
  std::stringstream fmt;
  fmt << "Class2(" << this << ")";

  return fmt.str();
}

void Class2::DoWork()
{


}
