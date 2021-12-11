#pragma once
#include "Vector3D.h"

class Ray
{
public:
	Ray();
	Ray(Point3D&, Vector3D&);
	Point3D origin() const;
	Vector3D direction() const;
	Point3D at() const;
public:
	Point3D orig;
	Vector3D dir;
};

