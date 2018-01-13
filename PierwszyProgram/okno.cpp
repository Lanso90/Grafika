#include "okno.h"
#include <iostream>



Punkt::Punkt()
{
	this->screenWidth = 1024;
	this->screenHeight = 768;
	this->posX = 100;
	this->posY = 100;
}

Punkt::Punkt(int screenWidth, int screenHeigth, int posX, int posY)
{
	this->screenWidth = screenWidth;
	this->screenHeight = screenHeigth;
	this->posX = posX;
	this->posY = posY;
}




void Punkt::CreateWindowGlut(int argc, char ** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(posX, posY);
	glutCreateWindow("punkt");
}

void Punkt::Display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	

	glutSwapBuffers();
}





int main(int argc, char ** argv)
{
Punkt punkt(786, 1024, 100, 100);

punkt.CreateWindowGlut(argc, argv);

glutDisplayFunc(punkt.Display);
// po zamknieciu okna kontrola wraca do programu
glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_GLUTMAINLOOP_RETURNS);

glClearColor(0.2f, 0.1f, 0.0f, 0.0f);

glutMainLoop();

return 0;
}