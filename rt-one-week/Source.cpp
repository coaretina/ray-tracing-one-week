#include <iostream>
#include "Source.h"
#include "Renderer.h"

int main()
{
	Renderer renderer = Renderer(256, 256);
	const std::string filename = "test_image.ppm";
	std::cout << "Writing " << filename << " ..." << std::endl;
	renderer.writeFile("test_image.ppm");
	std::cout << "Done!" << std::endl;
}
