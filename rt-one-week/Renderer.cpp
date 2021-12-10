#include "Renderer.h"
#include <iostream>


Renderer::Renderer() : width(DEFAULT_WIDTH), height(DEFAULT_HEIGHT) {};

Renderer::Renderer(const size_t width, const size_t height) : width(width), height(height) {};

Renderer::~Renderer() {}

size_t Renderer::getHeight()
{
	return this->height;
}

size_t Renderer::getWidth()
{
	return this->width;
}

void Renderer::writeHeader(std::ostream& os) {
	os << "P3" << std::endl << this->getWidth() << " " << this->getHeight() << std::endl;
}