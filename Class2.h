/* -*- mode: c++ -*- */
#ifndef CLASS2_H
#define CLASS2_H

#include <string>

class Class2
{
public:
  Class2();
  Class2(int i);
  virtual ~Class2();

  std::string ToString();
  void DoWork();


private:
  int m_nData;

};

#endif
