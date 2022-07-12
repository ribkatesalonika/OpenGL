#include <GL/glut.h>
#include <windows.h> 

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int,int);

int is_depth;

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("Ribka Tesalonika-672019327");
	init();
	glutDisplayFunc(tampil);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(ukuran);
	glutMainLoop();
	return 0;
	
}

void init(void){
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST);
	is_depth=1;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(9.0);
	glLineWidth(6.0f);
}

void tampil(void){
	if(is_depth)
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else
	glClear(GL_COLOR_BUFFER_BIT);
	
	//depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 1.0, 1.0);
	glVertex3f(-35.0, -25.0, 15.0); //A
	glVertex3f(35.0, -25.0, 15.0); 	//B
	glVertex3f(35.0, 25.0, 15.0);	//C
	glVertex3f(-35.0, 25.0, 15.0); 	//D
	glEnd();
	
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.5, 1.0, 1.0);
	glVertex3f(-35.0, -25.0, -15.0); //E
	glVertex3f(35.0, -25.0, -15.0); //F
	glVertex3f(35.0, 25.0, -15.0);	//G
	glVertex3f(-35.0, 25.0, -15.0);	//H
	glEnd();
	
	//kanan
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.5, 1.0);
	glVertex3f(35.0, -25.0, 15.0); 	//B
	glVertex3f(35.0, -25.0, -15.0); //F
	glVertex3f(35.0, 25.0, -15.0);	//G
	glVertex3f(35.0, 25.0, 15.0);	//C
	glEnd();
	
	//kiri
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.5, 1.0);
	glVertex3f(-35.0, -25.0, 15.0); //A
	glVertex3f(-35.0, -25.0, -15.0); //E
	glVertex3f(-35.0, 25.0, -15.0);	//H
	glVertex3f(-35.0, 25.0, 15.0); 	//D
	glEnd();
	
	
	//atas
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-35.0, 25.0, 15.0); 	//D
	glVertex3f(35.0, 25.0, 15.0);	//C
	glVertex3f(35.0, 25.0, -15.0);	//G
	glVertex3f(-35.0, 25.0, -15.0);	//H
	glEnd();
	
	
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.0, 0.0);
	glVertex3f(-35.0, -25.0, 15.0); //A
	glVertex3f(35.0, -25.0, 15.0); 	//B
	glVertex3f(35.0, -25.0, -15.0); //F
	glVertex3f(-35.0, -25.0, -15.0); //E
	glEnd();
	
//jendela 
	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.1f); 
	glVertex3f(15.0, 9.0, 15.0); 
	glVertex3f(25.0, 9.0, 15.0); 
	glVertex3f(25.0, 20.0, 15.0); 
	glVertex3f(15.0, 20.0, 15.0);
	glEnd();
	
	//pintu
	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.1f); 
	glVertex3f(-7.0, -25.0, 15.0); 
	glVertex3f(7.0, -25.0, 15.0); 
	glVertex3f(7.0, 5.0, 15.0); 
	glVertex3f(-7.0, 5.0, 15.0);
	glEnd();
	
//atap depan
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-35.0, 25.0, 15.0); 	//D
	glVertex3f(35.0, 25.0, 15.0);	//C
	glVertex3f(25.0, 55.0, 15.0); 	//J
	glVertex3f(-25.0, 55.0, 15.0); //I
	glEnd();
	
//atap samping
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(35.0, 25.0, 15.0);	//C
	glVertex3f(35.0, 25.0, -15.0);	//G
	glVertex3f(25.0, 55.0, -15.0);	//K
	glVertex3f(25.0, 55.0, 15.0); 	//J
	glEnd();
	
//atap atas
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(25.0, 35.0, 15.0); 	//J
	glVertex3f(25.0, 35.0, -15.0);	//K
	glVertex3f(-25.0, 55.0, -15.0); //L
	glVertex3f(-25.0, 55.0, 15.0); //I
	
//atap samping kiri
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-35.0, 25.0, 15.0); 	//D
	glVertex3f(-35.0, 25.0, -15.0);	//H
	glVertex3f(-25.0, 55.0, -15.0); //L
	glVertex3f(-25.0, 55.0, 15.0); //I
	glEnd();
	
//atap belakang
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(35.0, 25.0, -15.0);	//G
	glVertex3f(25.0, 55.0, -15.0);	//K
	glVertex3f(-25.0, 55.0, -15.0); //L
	glVertex3f(-35.0, 25.0, -15.0);	//H
	glEnd();
	
	glPushMatrix();
	glPopMatrix();
	
	glutSwapBuffers();
	

	
}

void keyboard(unsigned char key, int x, int y){
	switch (key){
		case 'w':
		case 'W':
			glTranslatef(0.0, 0.0, 3.0);
			break;
		case 'd':
		case 'D':
			glTranslatef(3.0, 0.0, 0.0);
			break;
		case 's':
		case 'S':
			glTranslatef(0.0,0.0,-3.0);
			break;
		case 'a':
		case 'A':
			glTranslatef(-3.0, 0.0, 0.0);
			break;
		case '7':
			glTranslatef(0.0, 3.0, 0.0);
			break;
		case '9':
			glTranslatef(0.0, -3.0, 0.0);
			break;
		case '2':
			glRotatef(2.0, 1.0, 0.0, 0.0);
			break;
		case '8':
			glRotatef(-2.0, 1.0, 0.0, 0.0);
			break;
		case '6':
			glRotatef(2.0, 0.0, 1.0, 0.0);
			break;
		case '4':
			glRotatef(-2.0, 0.0, 1.0, 0.0);
			break;
		case '1':
			glRotatef(2.0, 0.0, 0.0, 1.0);
			break;
		case '3':
			glRotatef(-2.0, 0.0, 0.0, 1.0);
			break;
		case '5':
			if (is_depth)
			{
				is_depth = 0;
				glDisable(GL_DEPTH_TEST);
			}
			else
			{
				is_depth = 1;
				glEnable(GL_DEPTH_TEST);
			}
	}
	tampil();
}

void ukuran(int lebar, int tinggi)
{
	if(tinggi == 0) tinggi = 1;
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, lebar/tinggi, 5.0, 500.0);
	glTranslatef(0.0, -5.0, -150.0);
	glMatrixMode(GL_MODELVIEW);
}




