#include "Sphere.h"

Sphere::Sphere(double radius) {
    _radius = radius;
}

double Sphere::getRadius() {
    return _radius;
}

void Sphere::setRadius(double radius) {
    _radius = radius;
}

double Sphere::getVolume() {
    return 4.0 / 3.0 * 3.14159 * _radius * _radius * _radius;
}

double Sphere::getSurfaceArea() {
    return 4.0 * 3.14159 * _radius * _radius;
}