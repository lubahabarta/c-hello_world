#include "Sphere.h"

// member initializer
Sphere::Sphere(double radius) : _radius(radius) {}

double Sphere::getRadius() const {
    return _radius;
}

double Sphere::getVolume() const {
    return 4.0 / 3.0 * 3.14159 * _radius * _radius * _radius;
}

double Sphere::getSurfaceArea() const {
    return 4.0 * 3.14159 * _radius * _radius;
}