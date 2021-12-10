#include "Renderer.h"
#include "Renderer.h"
#include "Renderer.h"
#include <iostream>


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

void Renderer::writeHeader(std::ostream& os) {
	os << "P3" << std::endl << this->getWidth() << " " << this->getHeight() << std::endl;
}