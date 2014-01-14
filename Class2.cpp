#include <iostream>
#include <string>
#include <sstream>
#include "Class2.h"

Class2::Class2()
  : m_nData(0)
{
  std::cout << "ClassX constructor" << std::endl;


}

Class2::Class2(int i)
  : m_nData(i)
{
  std::cout << "ClassX constructor" << std::endl;


}

Class2::~Class2()
{
  std::cout << "ClassX destructor" << std::endl;

}

std::string Class2::ToString()
{
  std::stringstream fmt;
  fmt << "Class2(" << this << ") m_nData(" << this->m_nData << ")";

  return fmt.str();
}

void Class2::DoWork()
{
  std::cout << "Class2 doing work!" << std::endl;

}
