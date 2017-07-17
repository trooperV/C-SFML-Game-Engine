#ifndef D_H
#define D_H

#pragma once
#include <SFML\Graphics.hpp>

namespace Display {
	void init();
	void clear();
	void display();
	void checkWindowEvents();
	bool isOpen();

	constexpr int WIDTH = 1280;
	constexpr int HEIGHT = 720;
}

#endif // !D_H