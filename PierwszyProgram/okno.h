#include <GL\glew.h>
#include <GL\freeglut.h>

#pragma once




class Punkt
{
public:
	Punkt();

	Punkt(int screenWidth, int screenHeigth, int posX, int posY);

	

	void CreateWindowGlut(int argc, char** argv);

	static void Display();


private:
	int screenWidth;
	int screenHeight;
	int posX;
	int posY;
};

