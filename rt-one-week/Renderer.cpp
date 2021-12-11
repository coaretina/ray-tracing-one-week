#include "Renderer.h"
#include "Renderer.h"
#include "Renderer.h"
#include <iostream>
#include <fstream>


Renderer::Renderer() : width(DEFAULT_WIDTH), height(DEFAULT_HEIGHT) {};

Renderer::Renderer(const unsigned width, const unsigned height) : width(width), height(height) {}
void Renderer::setWidth(const unsigned width)
{
	this->width = width;
}

void Renderer::setHeight(const unsigned height)
{
	this->height = height;
}

Renderer::~Renderer() {}

unsigned Renderer::getHeight()
{
	return this->height;
}


unsigned Renderer::getWidth()
{
	return this->width;
}

void Renderer::writeTestImage(std::ostream& os)
{
	for (int j = this->height - 1; j >= 0; --j) {
		for (int i = 0; i < this->width; ++i) {
			auto r = double(i) / (this->width - 1);
			auto g = double(j) / (this->height - 1);
			auto b = 0.25;

			int ir = static_cast<int>(255.999 * r);
			int ig = static_cast<int>(255.999 * g);
			int ib = static_cast<int>(255.999 * b);

			os << ir << ' ' << ig << ' ' << ib << std::endl;
		}
	}
}

void Renderer::writeHeader(std::ostream& os)
{
	os << "P3" << std::endl << this->getWidth() << " " << this->getHeight()
		<< std::endl << "255" << std::endl;
}

void Renderer::writeFile(std::string filename)
{
	std::ofstream newFile(filename);
	this->writeHeader(newFile);
	this->writeTestImage(newFile);
	newFile.close();
}