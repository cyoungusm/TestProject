#include <iostream>
#include <string>
#include "Class1.h"

int main();

int main()
{
  Class1 c1(5);
  Class2 c2(1);
  std::cout << "Hello!" << std::endl << std::endl;
  std::cout << c1.ToString() << std::endl << std::endl;
  std::cout << c2.ToString() << std::endl << std::endl;
  std::cout << "Done!" << std::endl;

  return 0;
}
