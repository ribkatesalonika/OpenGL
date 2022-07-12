#include <windows.h>
#include <gl/Gl.h>
#include <gl/glut.h>

void myInit(void)
{
	glClearColor(1.0,1.0,1.0,0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
		glPointSize(4.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(-700.0, 700.0, -500.0, 500.0);
}

void myDisplay(void) 
{ 
	glClear(GL_COLOR_BUFFER_BIT);  
	glBegin(GL_LINES); 
		glVertex2i(100,70); // titik A
		glVertex2i(500,450); //titik B
		glVertex2i(125,325); //titik C
		glVertex2i(650,275); //titik D
	glEnd(); 
	glBegin(GL_POINTS); 
		glVertex2f(346.291,303.976); // titik potong
	glEnd(); 
	glFlush();  
} 

int main(int argc, char** argv) 
{ 
	glutInit(&argc, argv);  
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  
	glutInitWindowSize(640,480);  
	glutInitWindowPosition(100, 150); 
	glutCreateWindow("672019327_672019185_672019221");  
	glutDisplayFunc(myDisplay);  
	myInit();  
	glutMainLoop();  
}

