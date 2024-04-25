#pragma once
#include <string>

class Shape
{
  std::string Name;
  virtual void PrintVolume() = 0;
};