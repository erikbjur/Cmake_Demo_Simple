#include "Rectangle.h"
#include <iostream>

void Rectangle::PrintVolume()
{
  double area = this->Height * this->Width * this->Length;
  std::cout << "Rectangle area is: " << area << std::endl;
}