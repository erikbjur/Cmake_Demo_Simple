#include "Circle.h"
#include <cmath>
#include <iostream>

void Circle::PrintVolume()
{
  double area = 3.1415 * std::pow( ( this->Diameter ) / 2, 2);
  std::cout << "Circle area is: " << area << std::endl;
}