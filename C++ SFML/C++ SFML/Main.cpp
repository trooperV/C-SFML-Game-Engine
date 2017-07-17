#include <iostream>
#include "Application.h"
#include "Random.h"

int main() {

	Random::init();
	for (int i = 0; i < 10; i++) {
		std::cout << Random::floatInRange(0, 10) << std::endl;
	}

	Application app;
	app.runMainLoop();
	system("pause");
	return 0;
}