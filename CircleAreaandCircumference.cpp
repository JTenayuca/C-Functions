#include <iostream>
#include <math.h>

float AreaAndCircumferance() {
std::cout << "Enter the radius of the circle: ";
  float radius = 0;
  std::cin >> radius;
  
  float Area = M_PI * pow(radius, 2);
  float Circumferance = 2*M_PI*radius;
  std::cout << "Area: " << Area << std::endl;
  std::cout << "Circumferance: " << Circumferance <<std::endl;
  return 0;

}

int main() {

  AreaAndCircumferance();

}
