#ifndef SPHERE_H
#define SPHERE_H

class Sphere {
private:
    double _radius;
public:
    Sphere(double);

    double getRadius();
    void setRadius(double);

    double getVolume();
    double getSurfaceArea();
};

#endif