#ifndef SPHERE_H
#define SPHERE_H

class Sphere {
private:
    const double _radius;
public:
    Sphere(double);

    double getRadius() const;
    double getVolume() const;
    double getSurfaceArea() const;
};

#endif