#include"Cylinder.h"
Cylinder::Cylinder(double a, double b) :height{ a }, radius{ b }{}
double Cylinder::Volume()const {
	return M_PI * pow(radius, 2) * height;
}
double Cylinder::SurfaceArea()const {
	return 2*M_PI*radius*(radius+height);
}