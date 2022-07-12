#include <GL/glut.h>
#define RATIO 1.200
#define WW 100
#define WH (WW/RATIO)
#define HALFX ((int)(WW/2))
#define HALFY ((int)(WH/2))
#define deltat .0009


int WindowWidth;
int WindowHeight;

void InitGL();
void Display();
void Reshape(int,int);

main(int argc, char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	WindowWidth = (int)(glutGet((GLenum)GLUT_SCREEN_WIDTH)*.4);
	WindowHeight = (int)(WindowWidth/RATIO); 
	glutInitWindowSize(WindowWidth,WindowHeight);
	glutInitWindowPosition((int)(glutGet((GLenum)GLUT_SCREEN_WIDTH)*.1),(glutGet((GLenum)GLUT_SCREEN_HEIGHT)/2)-(WindowHeight/2));
	glutCreateWindow("Belajar Membuat Tween – Huruf R menjadi A (Created by Ribka Tesalonika - 672019327)");
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape);
	InitGL();
	glutMainLoop();
	
}

void Display()
{
	glClearColor(0.137255, 0.137255, 0.137255, 1.0); 
	glClear(GL_COLOR_BUFFER_BIT); 
	//menyeting kotak 
	glLineWidth(4.0);
	//Dua belas titik awal untuk membentuk huruf R.
	float StartShape[19][2]={{-12.6,0},{-12.6,-15},{-20,-15},{-20,20},{0,20},{5,15},{5,5},{0,0},{15,-15},{6.22,-15},{-7.5,0},{-12.6,0},{-12.6,5},{-12.6,15},{-4,15},{-2.5,12.5},{-2.5,7.5},{-4,5},{-12.6,5}};
	//Dua belas titik akhir untuk menghasilkan huruf A.
	float EndShape[19][2]= {{5,0},{0,0},{-5,0},{-10,-15},{-20,-15},{-13.57,0},{-7.06,15},{-5,20},{0,20},{5,20},{7.06,15},{13.57,0},{20,-15,},{10,-15},{5,0},{4.9,5},{0,15},{-4.9,5},{4.9,5}};
	//Dua belas titik yang disediakan untuk menampung proses perubahan bentuk dari huruf R menjadi A.
	float IntermediateShape[12][2];
	//Pemberian warna yang berbeda di tiap titik untuk memberikan efek gradasi warna.
	float VertexColors[19][3]={{1,0,0},{1,1,0},{1,0,1},{0,1,0},{0,1,1},{0,0,1},{1,0.5,0},{1,0,0.5},{0.5,1,0},{0.5,0,1}, {1,0,0.5},{0,1,0.5},{1,0,0},{1,1,0},{1,0,1},{0,1,0},{0,1,1},{0,0,1},{1,0.5,0}};
	
	static float Tween=0.0-deltat;
	if(Tween<1){
		Tween+= deltat;
	}
	
	
	for (int Vtx=0;Vtx<19;Vtx++)
	{
		IntermediateShape[Vtx][0]=(1.0-Tween)*StartShape[Vtx][0]+Tween*EndShape[Vtx][0];
		IntermediateShape[Vtx][1]=(1.0-Tween)*StartShape[Vtx][1]+Tween*EndShape[Vtx][1];
	}
		
	glVertexPointer(2,GL_FLOAT,0,IntermediateShape);
	glColorPointer(3,GL_FLOAT,0,VertexColors);
	
	for (int i = 0; i < 1000000; i++); 
	glClear(GL_COLOR_BUFFER_BIT);
	glDrawArrays(GL_LINE_LOOP,0,19);
	glutSwapBuffers();
	glutPostRedisplay();
}


void Reshape(int w,int h)
{
	glutReshapeWindow(w,(int)(w/RATIO));
	WindowWidth=w;
	WindowHeight=(int)(w/RATIO);
	InitGL();
}

void InitGL()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-HALFX,HALFX,-HALFY,HALFY);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(1, 1, 1, 1);
	glEnableClientState (GL_VERTEX_ARRAY); 
	glEnableClientState (GL_COLOR_ARRAY);
	glShadeModel(GL_SMOOTH);
	glViewport(0,0,WindowWidth,WindowHeight);


}






