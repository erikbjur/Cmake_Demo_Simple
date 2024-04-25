#pragma once

#include "Shape.h"

class Rectangle : public Shape
{
  public:
    virtual void PrintVolume() override;

    double Height;
    double Width;
    double Length;
};