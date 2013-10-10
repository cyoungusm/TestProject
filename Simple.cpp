#include <iostream>
#include <string>
#include "Class1.h"
#include "Class2.h"

int main();

int main()
{
  Class1 c1(5);
  Class2 c2(1);
  std::cout << "Hello!" << std::endl;
  std::cout << c1.ToString() << std::endl;
  std::cout << c2.ToString() << std::endl;

  for (int i = 0; i < 10; ++i)
	{
	  Class2* pc = new Class2(i);
	  std::cout << pc->ToString() << std::endl;
	  delete pc;
	}

  std::cout << "Done!" << std::endl;

  return 0;
}
