#include"Pyramid.h"
Pyramid::Pyramid(double a, double b, double h, double ap) : side1{ a }, side2{ b }, height{ h }, apophema(ap){}
double Pyramid::Volume()const {
	return side1*side2 * height/3 ;
}
double Pyramid::SurfaceArea()const {
	return  (side1+side2)*apophema +side1*side2;
}