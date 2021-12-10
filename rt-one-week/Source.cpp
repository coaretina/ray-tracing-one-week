#include <iostream>
#include "Source.h"
#include "Renderer.h"

int main()
{
	Renderer renderer = Renderer();
	renderer.writeHeader(std::cout);
}
