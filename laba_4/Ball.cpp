#include"Ball.h"
Ball::Ball(double radius) :radius{ radius } {}
double Ball::Volume()const {
	return 4* M_PI * pow(radius,3)/3;
}
double Ball::SurfaceArea()const {
	return 4*M_PI * pow(radius, 2);
}