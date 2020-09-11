// This program calculates a person's height in feet (') and inches (").
// HEE HWANG
// CPSC 120, TTH 7:00pm ~ 8:15pm (9:45pm THUR.)

#include <iostream>

int main ()
{
  // Declaring variables that will be used.
  int inches;
  int feet;
  double feet_inch;

  std::cout << "Please enter the person's height in inches: ";
  std::cin >> inches;

  // Measurement conversion: ft part
  feet = inches / 12;

  // Measurement conversion: inch part
  feet_inch = inches % 12;

  std::cout << "That person is " << feet << "\'" << feet_inch << "\"";

  return 0;
}
