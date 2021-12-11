#include "Ray.h"

Ray::Ray()
{
	this->orig = Point3D(0, 0, 0);
	this->dir = Vector3D(0, 0, 0);
}

Ray::Ray(Point3D& origin, Vector3D& direction)
{
	this->orig = origin;
	this->dir = direction;
}

Point3D Ray::origin() const
{
	return this->orig;
}

Point3D Ray::direction() const
{
	return this->dir;
}

Point3D Ray::at() const
{
	return this->orig + this->dir;
}