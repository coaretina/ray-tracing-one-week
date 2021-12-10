#pragma once
#include <iostream>

constexpr auto DEFAULT_WIDTH = 1024;
constexpr auto DEFAULT_HEIGHT = 768;;

class Renderer
{
private:
	size_t width;
	size_t height;
public:
	Renderer();
	Renderer(const size_t, const size_t);
	
	void setWidth();
	void setHeight();
	size_t getWidth();
	size_t getHeight();
	void writeHeader(std::ostream& os);

	~Renderer();
};

