#pragma once
#include <cmath>
#include <iostream>

using std::sqrt;

class Vector3D {
public:
	Vector3D() : e{ 0,0,0 } {}
	Vector3D(double e0, double e1, double e2) : e{ e0, e1, e2 } {}
	Vector3D(Vector3D&&) noexcept;
	Vector3D(const Vector3D&);
	friend std::ostream& operator<<(std::ostream&, const Vector3D&);
	std::ostream& operator<<(std::ostream&);
	friend double dot(const Vector3D&, const Vector3D&);
	friend Vector3D cross(const Vector3D&, const Vector3D&);
	double getX() const;
	double getY() const;
	double getZ() const;
	double operator[](unsigned i) const;
	double& operator[](unsigned i);
	Vector3D operator-() const;
	Vector3D& operator+=(const Vector3D&);
	Vector3D operator+(const Vector3D&);
	Vector3D operator*(const double);
	Vector3D operator-(const Vector3D&);
	Vector3D& operator*=(const double);
	Vector3D& operator/=(const double t);
	double length() const;
	double length_squared() const;
	void printColumnVector(std::ostream&);
	void printRowVector(std::ostream&);
public:
	double e[3];
};






