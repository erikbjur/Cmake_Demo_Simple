#pragma once
#include "Shape.h"

class Circle : public Shape
{
  public:
    virtual void PrintVolume() override;

    double Diameter;
};