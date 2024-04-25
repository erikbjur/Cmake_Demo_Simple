#include "Rectangle.h"
#include "Circle.h"

int main()
{
  // Make a rectangle
  Rectangle myRectangle;
  myRectangle.Height = 5.0;
  myRectangle.Width = 3.0;
  myRectangle.Length = 8.0;
  myRectangle.PrintVolume();

  Circle myCircle;
  myCircle.Diameter = 6.0;
  myCircle.PrintVolume();

  return 0;
}