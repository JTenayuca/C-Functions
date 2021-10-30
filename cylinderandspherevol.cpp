#include <iostream>
#include <math.h>
#include <array>
using namespace std;



double VolumeOf(int radius) {
  double Sphere = (4*M_PI*pow(radius, 3))/3;
  return Sphere;
}

double VolumeOf(int radius, double height) {
  double Cylinder = M_PI*pow(radius, 2)*height;
  return Cylinder;
}


int main() {
  cout << "Hello! Press 1 to calculate sphere volume or press 2 to calculate cylinder volume" <<endl;

  char userSelection = '1';
  cin >> userSelection;

  cout << "Enter in the radius size";
  double radius = 0;
  cin >> radius;

  if(userSelection == '1') {
    cout << "Volume of the sphere is " << VolumeOf(radius) << endl;
  }
  else if(userSelection == '2') {
    cout << "Enter the height of the cylinder";
    double cylHeight = 0;
    cin >> cylHeight;
    cout << "The volume of the cylinder is: " << VolumeOf(radius, cylHeight) << endl;
  }
  else {
    cout << "Incorrect entry, please try again" << endl;
    return 0;
  }
}
