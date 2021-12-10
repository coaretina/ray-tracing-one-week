#pragma once
#include <iostream>

constexpr auto DEFAULT_WIDTH = 1024;
constexpr auto DEFAULT_HEIGHT = 768;;

class Renderer
{
private:
	unsigned width;
	unsigned height;
public:
	Renderer();
	Renderer(const unsigned, const unsigned);
	
	void setWidth(const unsigned);
	void setHeight(const unsigned);
	unsigned getWidth();
	unsigned getHeight();
	void writeHeader(std::ostream& os);

	~Renderer();
};

