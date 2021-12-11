#include <iostream>
#include "Source.h"
#include "Renderer.h"
#include "Vector3D.h"

int main()
{
	Vector3D a = Vector3D(3, 3, 3);
	Vector3D b = a * 3;
	Vector3D c = Vector3D(4, 1, 5);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "Dot product = " << dot(a, b) << std::endl;
	std::cout << "Cross product = " << cross(a, b) << std::endl;
}