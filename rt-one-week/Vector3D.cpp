#include "Vector3D.h"

Vector3D& Vector3D::operator+=(const Vector3D& v)
{
	this->e[0] += v.e[0];
	this->e[1] += v.e[1];
	this->e[2] += v.e[2];
	return *this;
}

Vector3D& Vector3D::operator*=(const double v)
{
	this->e[0] *= v;
	this->e[1] *= v;
	this->e[2] *= v;
	return *this;
}

double Vector3D::length() const
{
	return std::sqrt(this->length_squared());
}

Vector3D& Vector3D::operator/=(const double t)
{
	return *this *= 1 / t;
}

double Vector3D::operator[](unsigned i) const { return this->e[i]; }

double& Vector3D::operator[](unsigned i) { return this->e[i]; };

double Vector3D::length_squared() const
{
	return static_cast<int> (std::pow(this->e[0], 2)
		+ std::pow(this->e[1], 2)
		+ std::pow(this->e[2], 2));
}

Vector3D::Vector3D(Vector3D&& other) noexcept
{
	this->e[0] = other[0];
	this->e[1] = other[1];
	this->e[2] = other[2];
}

Vector3D::Vector3D(const Vector3D& other)
{
	this->e[0] = other[0];
	this->e[1] = other[1];
	this->e[2] = other[2];
}

double Vector3D::getX() const { return e[0]; }

double Vector3D::getY() const { return e[1]; }

double Vector3D::getZ() const { return e[2]; }

Vector3D Vector3D::operator-() const
{
	return Vector3D(-this->e[0], -this->e[1], -this->e[2]);
}

void Vector3D::printColumnVector(std::ostream& os)
{
	os << "[ " << this->e[0] << " " << "]" << std::endl;
	os << "[ " << this->e[1] << " " << "]" << std::endl;
	os << "[ " << this->e[2] << " " << "]" << std::endl;
}

void Vector3D::printRowVector(std::ostream& os)
{
	os << this->e[0] << ' ' << this->e[1] << ' ' << this->e[2];
}

std::ostream& operator<<(std::ostream& out, const Vector3D& u)
{
	return out << u.e[0] << ' ' << u.e[1] << ' ' << u.e[2];
}

std::ostream& Vector3D::operator<<(std::ostream& out)
{
	return out << this->e[0] << ' ' << this->e[1] << ' ' << this->e[2];
}

Vector3D Vector3D::operator+(const Vector3D& u)
{
	return Vector3D(u.e[0] + this->e[0], u.e[1] + this->e[1], u.e[2] + this->e[2]);
}

Vector3D Vector3D::operator*(const double a)
{
	return Vector3D(a * this->e[0], a * this->e[1], a * this->e[2]);
}

Vector3D Vector3D::operator-(const Vector3D& u)
{
	return Vector3D(this->e[0] - u.e[0], this->e[1] - u.e[1], this->e[2] - u.e[2]);
}

double dot(const Vector3D& u, const Vector3D& v)
{
	return u.e[0] * v.e[0]
		+ u.e[1] * v.e[1]
		+ u.e[2] * v.e[2];
}

Vector3D cross(const Vector3D& u, const Vector3D& v)
{
	return Vector3D(u.e[1] * v.e[2] - u.e[2] * v.e[1],
		u.e[2] * v.e[0] - u.e[0] * v.e[2],
		u.e[0] * v.e[1] - u.e[1] * v.e[0]);
}

inline Vector3D operator*(double t, const Vector3D& v)
{
	return Vector3D(t * v.e[0], t * v.e[1], t * v.e[2]);
}

inline Vector3D operator*(const Vector3D& v, double t)
{
	return t * v;
}

inline Vector3D operator/(Vector3D v, double t)
{
	return (1 / t) * v;
}


inline Vector3D unit_vector(Vector3D v)
{
	return v / v.length();
}