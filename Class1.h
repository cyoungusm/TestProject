/* -*- mode: c++ -*- */
#ifndef CLASS1_H
#define CLASS1_H

#include <string>

class Class1
{
public:
  Class1();
  Class1(int i);
  virtual ~Class1();

  std::string ToString();
  void DoWork();


private:
  int m_nData;

};

#endif
