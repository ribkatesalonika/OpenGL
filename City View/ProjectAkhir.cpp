#include <windows.h>
#include <GL/GLUT.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// actual vector representing the camera's direction
float lx=0.0f,lz=-1.0f;
// XZ position of the camera
float x=0.0f,z=5.0f;

// idle angle
float zpos=-1;
float ypos=-1;
float r,g,b;

// all variables initialized to 1.0, meaning
// the triangle will initially be white
float red=1.0f, blue=1.0f, green=1.0f;

// angle for rotating triangle
float angle = 0.0f;

//int dummy = 5;

void idle()
{
    if(zpos<=10)
    {
        r = (rand()%9/8);
        g = (rand()%9/8);
        b = (rand()%9/8);
        // moving speed
        zpos+=0.03;
    }

    else
    {
        zpos=zpos-10;
    }
    glutPostRedisplay();
}
void car(){
	glMatrixMode(GL_MODELVIEW);
 	glPushMatrix();
 	glPushMatrix();
 	
    glPushMatrix();                   // body of car
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glScalef(4,1,2);
    glutSolidCube(.5);
    glTranslatef(-.05,.3,0);
    glScalef(0.6,3,2);
    glutSolidCube(.25);
    glTranslatef(-.12,.001,-.001);  
    glScalef(1,1.8,2.48);
    glRotatef(230, 0, 0, 250);
    glutSolidCube(.1);
    glPopMatrix();
    
    glTranslatef(0.4,-0.1,.5);
    glPushMatrix();
    glTranslatef(-.3,-.2,0.1);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidTorus(.1,.2,8,8);       // wheel
    glPopMatrix();
    
   
	glPushMatrix();
	glRotatef(90.0, 0.0, 1.0, 0.0);
    glTranslatef(1,-.2,0.1);
    glutSolidTorus(.1,.2,8,8);       // wheel
	glPopMatrix();
	
	glPushMatrix();
	glRotatef(90.0, 0.0, 1.0, 0.0);
    glTranslatef(1,-.2,-0.9);
    glutSolidTorus(.1,.2,8,8);       // wheel
	glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glFlush();
}

void setMaterial ( GLfloat ambientR, GLfloat ambientG, GLfloat ambientB, 
		   GLfloat diffuseR, GLfloat diffuseG, GLfloat diffuseB, 
		   GLfloat specularR, GLfloat specularG, GLfloat specularB,
		   GLfloat shininess ) {

    GLfloat ambient[] = { ambientR, ambientG, ambientB };
    GLfloat diffuse[] = { diffuseR, diffuseG, diffuseB };
    GLfloat specular[] = { specularR, specularG, specularB };

    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,ambient);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diffuse);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,specular);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shininess);
}

void roof(){
	glPushMatrix();
	glRotatef(-90,1,0,0);
    setMaterial(0.0,0.5,1.0,0.0,0.5,1.0,1.0,1.0,1.0,50);
    glutSolidCone(0.9,1.2,16,8);
    glPopMatrix();
}



void drawBuilding()
{
	glColor3f(0.329412f, 0.329412f, 0.329412f);

// Draw Building
	glTranslatef(0.0f ,0.75f, 0.0f);
	glutSolidCube(2.0);

	glTranslatef(0.0f ,0.75f, 0.0f);
	glutSolidCube(2.0);
	
	glTranslatef(0.00f ,0.75f, 0.0f);
	glutSolidCube(2.0);

	glTranslatef(0.0f ,0.75f, 0.0f);
	glutSolidCube(2.0);
	
	glTranslatef(0.0f ,0.75f, 0.0f);
	glutSolidCube(2.0);
	
	glTranslatef(0.0f ,0.75f, 0.0f);
	glutSolidCube(2.0);
	
	glTranslatef(0.0f ,0.75f, 0.0f);
	glutSolidCube(2.0);
	
	glColor3f(0.329412f, 0.329412f, 0.329412f);
	glTranslatef(0.0f ,0.75f, 0.0f);
	glutSolidCube(1.8);

	glColor3f(0.329412f, 0.329412f, 0.329412f);	
	glTranslatef(0.0f ,0.75f, 0.0f);
	roof();

//building2
	glPushMatrix();
	glColor3f(0.329412f, 0.329412f, 0.329412f);	
	glTranslatef(5.0f ,-6.3f, 0.0f);
	glutSolidCube(1.5);
	glPopMatrix();	
	
	glPushMatrix();
	glColor3f(0.329412f, 0.329412f, 0.329412f);	
	glTranslatef(5.0f ,-4.8f, 0.0f);
	glutSolidCube(1.5);
	glPopMatrix();	
	
	glPushMatrix();
	glColor3f(0.329412f, 0.329412f, 0.329412f);	
	glTranslatef(5.0f ,-3.3f, 0.0f);
	glutSolidCube(1.5);
	glPopMatrix();	
	
	glPushMatrix();
	glColor3f(0.329412f, 0.329412f, 0.329412f);	
	glTranslatef(5.0f ,-1.8f, 0.0f);
	glutSolidCube(1.5);
	glPopMatrix();	
	
	glPushMatrix();
	glColor3f(0.329412f, 0.329412f, 0.329412f);	
	glTranslatef(5.0f ,-0.6f, 0.0f);
	glutSolidCube(1.3);
	glPopMatrix();	
	
	glPushMatrix();
	glColor3f(0.429412f, 0.429412f, 0.429412f);	
	glTranslatef(5.0f ,0.0f, 0.0f);
	glutSolidCube(1.0);
	glPopMatrix();	


// draw moving cube
	glPushMatrix();
	glColor3f(r, g, b);
	
	glTranslatef(2.5, -6.3, zpos);
	glScalef(0.5,0.5, 1);
	car();
	glPopMatrix();

}


void changeSize(int w, int h)
{

// Prevent a divide by zero, when window is too short
// (you cant make a window of zero width).
    if (h == 0)
        h = 1;
    float ratio = w * 1.0 / h;

// Use the Projection Matrix
    glMatrixMode(GL_PROJECTION);

// Reset Matrix
    glLoadIdentity();

// Set the viewport to be the entire window
    glViewport(0, 0, w, h);

// Set the correct perspective.
    gluPerspective(45.0f, ratio, 0.1f, 100.0f);

// Get Back to the Modelview
    glMatrixMode(GL_MODELVIEW);
}

void renderScene(void)
{
glClearColor(0.184314, 0.184314, 0.309804, 1.0); 
// Clear Color and Depth Buffers
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

// Reset transformations
    glLoadIdentity();
// Set the camera
    gluLookAt( x, 1.0f, z, x+lx, 1.0f, z+lz, 0.0f, 1.0f, 0.0f);

// Draw ground

    glColor3f(0.75f, 0.75f, 0.75f);
    
    glBegin(GL_QUADS);
        glVertex3f(-100.0f, 0.0f, -100.0f);
        glVertex3f(-100.0f, 0.0f, 100.0f);
        glVertex3f( 100.0f, 0.0f, 100.0f);
        glVertex3f( 100.0f, 0.0f, -100.0f);
    glEnd();

// Draw ... Building
    for(int i = -3; i <3; i++)
        for(int j=-3; j < 3; j++)
        {
            glPushMatrix();
            glTranslatef(i*10.0,0,j * 10.0);
            drawBuilding();
            glPopMatrix();
        }

    idle();
    glutSwapBuffers();
    glFlush();
}

void processNormalKeys(unsigned char key, int x, int y)
{
    if (key == 27)
        exit(0);
}

void processSpecialKeys(int key, int xx, int yy)
{
    float fraction = 0.1f;

    switch (key)
    {
        case GLUT_KEY_LEFT :
            angle -= 0.1f;
            lx = sin(angle);
            lz = -cos(angle);
            break;
            
        case GLUT_KEY_RIGHT :
            angle += 0.1f;
            lx = sin(angle);
            lz = -cos(angle);
            break;
            
        case GLUT_KEY_UP :
            x += lx * fraction;
            z += lz * fraction;
            break;
            
        case GLUT_KEY_DOWN :
            x -= lx * fraction;
            z -= lz * fraction;
            break;
    

	}
}

int main(int argc, char **argv)
{
// init GLUT and create window
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(320,320);
    glutCreateWindow("Ribka Tesalonika_672019327");

// register callbacks
    glutDisplayFunc(renderScene);
    glutReshapeFunc(changeSize);
    glutIdleFunc(renderScene);
    glutKeyboardFunc(processNormalKeys);
    glutSpecialFunc(processSpecialKeys);

// OpenGL init
    glEnable(GL_DEPTH_TEST);
// enter GLUT event processing cycle
    glutMainLoop();

return 1;
}

