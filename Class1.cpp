#include <iostream>
#include <string>
#include <sstream>
#include "Class1.h"

Class1::Class1()
  : m_nData(0)
{

  std::cout << "Class1 constructor" << std::endl;

}

Class1::Class1(int i)
  : m_nData(i)
{

  std::cout << "Class1 constructor" << std::endl;

}

Class1::~Class1()
{
  std::cout << "Class1 destructor" << std::endl;

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
