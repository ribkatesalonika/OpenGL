#include <GL/glut.h>
#include <windows.h> 

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
int is_depth;
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("672019327-672019185-672019221");
	init();
	glutDisplayFunc(tampil);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(ukuran);
	glutMainLoop();
	return 0;

}
void init(void) {

	glClearColor(1, 1, 1, 1);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST);
	is_depth = 1;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(9.0);
	glLineWidth(6.0f);
}
void atap() {
	//dpn
	glBegin(GL_QUADS);
	glColor3f(0.647059f, 0.164706f, 0.164706f);
	glVertex3f(52.0, 35.0, 40.0);	//C
	glVertex3f(-52.0, 35.0, 40.0); 	//D
	glVertex3f(-45.0, 65.0, 0.0); 	//P
	glVertex3f(45.0, 65.0, 0.0); 	//O
	glEnd();
	//blkg
	glBegin(GL_QUADS);
	glColor3f(0.647059f, 0.164706f, 0.164706f);
	glVertex3f(52.0, 35.0, -40.0);	//G
	glVertex3f(-52.0, 35.0, -40.0); //H
	glVertex3f(-45.0, 65.0, 0.0); 	//P
	glVertex3f(45.0, 65.0, 0.0); 	//O
	glEnd();
	//kanan
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 0.62f);
	glVertex3f(52.0, 35.0, 40.0);	//C
	glVertex3f(45.0, 65.0, 0.0); 	//O
	glVertex3f(52.0, 35.0, -40.0);	//G
	glEnd();
	//KIRI
	glBegin(GL_TRIANGLES);
	glVertex3f(-52.0, 35.0, 40.0); 	//D
	glVertex3f(-45.0, 65.0, 0.0); 	//P
	glVertex3f(-52.0, 35.0, -40.0); //H
	glEnd();
}

void building() {
	//main building
	glBegin(GL_QUADS); //front
	glColor3f(1.0f, 1.0f, 0.62f);
	glVertex3f(-52.0, -35.0, 40.0); //A
	glVertex3f(52.0, -35.0, 40.0); 	//B
	glVertex3f(52.0, 35.0, 40.0);	//C
	glVertex3f(-52.0, 35.0, 40.0); 	//D
	glEnd();
	glBegin(GL_QUADS);//belakang
	glVertex3f(-52.0, -35.0, -40.0); //E
	glVertex3f(52.0, -35.0, -40.0); //F
	glVertex3f(52.0, 35.0, -40.0);	//G
	glVertex3f(-52.0, 35.0, -40.0); //H
	glEnd();
	glBegin(GL_QUADS);//kanan
	glVertex3f(52.0, -35.0, 40.0); 	//B
	glVertex3f(52.0, -35.0, -40.0); //F
	glVertex3f(52.0, 35.0, -40.0);	//G
	glVertex3f(52.0, 35.0, 40.0);	//C
	glEnd();
	glBegin(GL_QUADS);//kiri
	glVertex3f(-52.0, -35.0, 40.0); //A
	glVertex3f(-52.0, -35.0, -40.0); //E
	glVertex3f(-52.0, 35.0, -40.0); //H
	glVertex3f(-52.0, 35.0, 40.0); 	//D
	glEnd();
	glBegin(GL_QUADS);//atas
	glVertex3f(-52.0, 35.0, 40.0); 	//D
	glVertex3f(52.0, 35.0, 40.0);	//C
	glVertex3f(52.0, 35.0, -40.0);	//G
	glVertex3f(-52.0, 35.0, -40.0); //H
	glEnd();
	glBegin(GL_QUADS);	//bawah
	glVertex3f(-52.0, -35.0, 40.0); //A
	glVertex3f(52.0, -35.0, 40.0); 	//B
	glVertex3f(52.0, -35.0, -40.0); //F
	glVertex3f(-52.0, -35.0, -40.0); //E
	glEnd();
	//kbs dpn
	glBegin(GL_QUADS);
	glVertex3f(-15.0, -35.0, 75.0); //V
	glVertex3f(15.0, -35.0, 75.0); 	//W
	glVertex3f(15.0, 10.0, 75.0);	//X
	glVertex3f(-15.0, 10.0, 75.0); 	//Y
	glEnd();
	//kbs kanan
	glBegin(GL_QUADS);
	glVertex3f(15.0, -35.0, 40.1); 	//S
	glVertex3f(15.0, -35.0, 75.0); 	//W
	glVertex3f(15.0, 10.0, 75.0);	//X
	glVertex3f(15.0, 10.0, 40.1);	//T
	glEnd();
	//kbs kiri
	glBegin(GL_QUADS);
	glVertex3f(-15.0, -35.0, 40.1); //R
	glVertex3f(-15.0, -35.0, 75.0); //V
	glVertex3f(-15.0, 10.0, 75.0); 	//Y
	glVertex3f(-15.0, 10.0, 40.1); 	//U
	glEnd();
	//kbsatas
	glBegin(GL_QUADS);
	glVertex3f(15.0, 10.0, 40.1);	//T
	glVertex3f(-15.0, 10.0, 40.1); 	//U
	glVertex3f(-15.0, 10.0, 75.0); 	//Y
	glVertex3f(15.0, 10.0, 75.0);	//X
	glEnd();
	//kubus bwh
	glBegin(GL_QUADS);
	glVertex3f(-15.0, -35.0, 40.1); //R
	glVertex3f(15.0, -35.0, 40.1); 	//S
	glVertex3f(15.0, -35.0, 75.0); 	//W
	glVertex3f(-15.0, -35.0, 75.0); //V
	glEnd();
	//lis coklat di bawah dinding
	glBegin(GL_QUADS);//dpn
	glColor3f(0.35f, 0.16, 0.14);	//depan
	glVertex3f(-52.0, -35.0, 40.4); //a
	glVertex3f(52.0, -35.0, 40.4); 	//b
	glVertex3f(52.0, -34, 40.4); 	//c
	glVertex3f(-52.0, -34, 40.4); //d
	glEnd();
	//jalan dpn
	glBegin(GL_QUADS);//dpn
	glColor3f(0.92f, 0.78f, 0.62f);
	glVertex3f(-15.0, -35.0, 82); //a
	glVertex3f(15.0, -35.0, 82); 	//b
	glVertex3f(15.0, -34.5, 82); 	//c
	glVertex3f(-15.0, -34.5, 82); //d
	glEnd();
	glBegin(GL_QUADS);//blkg
	glVertex3f(-15.0, -35.0, 76); //e
	glVertex3f(15.0, -35.0, 76); 	//f
	glVertex3f(15.0, -34.5, 76.0); 	//g
	glVertex3f(-15.0, -34.5, 76.0); //h
	glEnd();
	glBegin(GL_QUADS);//krii
	glVertex3f(-15.0, -35.0, 82); //a
	glVertex3f(-15.0, -34.5, 82); //d
	glVertex3f(-15.0, -34.5, 76.0); //h
	glVertex3f(-15.0, -35.0, 76); //e
	glEnd();
	glBegin(GL_QUADS);//knn
	glVertex3f(15.0, -35.0, 82); 	//b
	glVertex3f(15.0, -34.5, 82); 	//c
	glVertex3f(15.0, -34.5, 76.0); 	//g
	glVertex3f(15.0, -35.0, 76); 	//f
	glEnd();
	glBegin(GL_QUADS);//atas
	glVertex3f(15.0, -34.5, 82.0); 	//c
	glVertex3f(-15.0, -34.5, 82.0); //d
	glVertex3f(-15.0, -34.5, 76.0); //h
	glVertex3f(15.0, -34.5, 76.0); 	//g
	glEnd();
	//jalan dpn gedung2

}
void kotakotak() {
	//nempeldinding utama
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, -35.0, 40.0); //A
	glVertex3f(-50.0, -35.0, 40.0); //Bb
	glVertex3f(-50.0, 35.0, 40.0);	//Cc
	glVertex3f(-52.0, 35.0, 40.0); 	//Dd
	glEnd();

	glBegin(GL_QUADS);//depan
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, -35.0, 40.2); //Aadpn
	glVertex3f(-50.0, -35.0, 40.2); 	//Bbdpn
	glVertex3f(-50.0, 35.0, 40.2);	//Ccdpn
	glVertex3f(-52.0, 35.0, 40.2); 	//Dddpn
	glEnd();


	glBegin(GL_QUADS);//kanan
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-50.0, -35.0, 40.2); 	//Bbdpn
	glVertex3f(-50.0, 35.0, 40.2);	//Ccdpn
	glVertex3f(-50.0, 35.0, 40.0);	//Cc
	glVertex3f(-50.0, -35.0, 40.0); 	//Bb
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-50.0, -35.0, 40.2); //Aadpn
	glVertex3f(-50.0, 35.0, 40.2); 	//Dddpn
	glVertex3f(-50.0, 35.0, 40.0); 	//Dd
	glVertex3f(-50.0, -35.0, 40.0); //A
	glEnd();

	glBegin(GL_QUADS);//atas
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-50.0, 35.0, 40.0);	//Cc
	glVertex3f(-52.0, 35.0, 40.0); 	//Dd
	glVertex3f(-50.0, 35.0, 40.2);	//Ccdpn
	glVertex3f(-52.0, 35.0, 40.2); 	//Dddpn
	glEnd();

	glBegin(GL_QUADS);	//bawah
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, -35.0, 40.0); //A
	glVertex3f(-50.0, -35.0, 40.0); 	//Bb
	glVertex3f(-52.0, -35.0, 40.2); //Aadpn
	glVertex3f(-50.0, -35.0, 40.2); 	//Bbdpn
	glEnd();

}
void kotakotak2() {
	glPushMatrix();
	glTranslatef(102, 0, 0);
	kotakotak();
	glPopMatrix();
}
void bata() {
	//1
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, -35.0, 40.2); //a
	glVertex3f(-48.5, -35.0, 40.2); //b
	glVertex3f(-48.5, -33.0, 40.2);//c
	glVertex3f(-52.0, -33.0, 40.2); //d
	glEnd();
	//2
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, -31.0, 40.2); //a
	glVertex3f(-48.5, -31.0, 40.2); //b
	glVertex3f(-48.5, -29.0, 40.2);//c
	glVertex3f(-52.0, -29.0, 40.2); //d
	glEnd();
	//3
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, -27.0, 40.2); //a
	glVertex3f(-48.5, -27.0, 40.2); //b
	glVertex3f(-48.5, -25.0, 40.2);//c
	glVertex3f(-52.0, -25.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, -23.0, 40.2); //a
	glVertex3f(-48.5, -23.0, 40.2); //b
	glVertex3f(-48.5, -21.0, 40.2);//c
	glVertex3f(-52.0, -21.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, -19.0, 40.2); //a
	glVertex3f(-48.5, -19.0, 40.2); //b
	glVertex3f(-48.5, -17.0, 40.2);//c
	glVertex3f(-52.0, -17.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, -15.0, 40.2); //a
	glVertex3f(-48.5, -15.0, 40.2); //b
	glVertex3f(-48.5, -13.0, 40.2);//c
	glVertex3f(-52.0, -13.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, -11.0, 40.2); //a
	glVertex3f(-48.5, -11.0, 40.2); //b
	glVertex3f(-48.5, -9.0, 40.2);//c
	glVertex3f(-52.0, -9.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, -7.0, 40.2); //a
	glVertex3f(-48.5, -7.0, 40.2); //b
	glVertex3f(-48.5, -5.0, 40.2);//c
	glVertex3f(-52.0, -5.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, -3.0, 40.2); //a
	glVertex3f(-48.5, -3.0, 40.2); //b
	glVertex3f(-48.5, -1.0, 40.2);//c
	glVertex3f(-52.0, -1.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, 1.0, 40.2); //a
	glVertex3f(-48.5, 1.0, 40.2); //b
	glVertex3f(-48.5, 3.0, 40.2);//c
	glVertex3f(-52.0, 3.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, 5.0, 40.2); //a
	glVertex3f(-48.5, 5.0, 40.2); //b
	glVertex3f(-48.5, 7.0, 40.2);//c
	glVertex3f(-52.0, 7.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, 9.0, 40.2); //a
	glVertex3f(-48.5, 9.0, 40.2); //b
	glVertex3f(-48.5, 11.0, 40.2);//c
	glVertex3f(-52.0, 11.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, 13.0, 40.2); //a
	glVertex3f(-48.5, 13.0, 40.2); //b
	glVertex3f(-48.5, 15.0, 40.2);//c
	glVertex3f(-52.0, 15.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, 17.0, 40.2); //a
	glVertex3f(-48.5, 17.0, 40.2); //b
	glVertex3f(-48.5, 19.0, 40.2);//c
	glVertex3f(-52.0, 19.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, 21.0, 40.2); //a
	glVertex3f(-48.5, 21.0, 40.2); //b
	glVertex3f(-48.5, 23.0, 40.2);//c
	glVertex3f(-52.0, 23.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, 25.0, 40.2); //a
	glVertex3f(-48.5, 25.0, 40.2); //b
	glVertex3f(-48.5, 27.0, 40.2);//c
	glVertex3f(-52.0, 27.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, 29.0, 40.2); //a
	glVertex3f(-48.5, 29.0, 40.2); //b
	glVertex3f(-48.5, 31.0, 40.2);//c
	glVertex3f(-52.0, 31.0, 40.2); //d
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-52.0, 33.0, 40.2); //a
	glVertex3f(-48.5, 33.0, 40.2); //b
	glVertex3f(-48.5, 35.0, 40.2);//c
	glVertex3f(-52.0, 35.0, 40.2); //d
	glEnd();

}
void bata2() {
	glPushMatrix();
	glRotatef(180, 0, 0, 1);
	bata();
	glPopMatrix();
}

void jendela() {
	//mendatar
	glBegin(GL_QUADS);//dpn
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-40.5, -20.0, 40.4); //a
	glVertex3f(-20.8, -20.0, 40.4); //b
	glVertex3f(-20.8, -19, 40.4);//c
	glVertex3f(-40.5, -19, 40.4); //d
	glEnd();
	glBegin(GL_QUADS);//kiri
	glVertex3f(-40.5, -20.0, 40.4); //a
	glVertex3f(-40.5, -19, 40.4); //d
	glVertex3f(-40.5, -19, 40.0); //h
	glVertex3f(-40.5, -20.0, 40.0); //e
	glEnd();
	glBegin(GL_QUADS);//kanan
	glVertex3f(-20.8, -20.0, 40.4); //b
	glVertex3f(-20.8, -19, 40.4);//c
	glVertex3f(-20.8, -19, 40.0);//g
	glVertex3f(-20.8, -20.0, 40.0); //f
	glEnd();
	glBegin(GL_QUADS);//atas
	glVertex3f(-20.8, -19, 40.4);//c
	glVertex3f(-40.5, -19, 40.4); //d	
	glVertex3f(-20.8, -19, 40.0);//g
	glVertex3f(-40.5, -19, 40.0); //h
	glEnd();
	glBegin(GL_QUADS);//atas
	glVertex3f(-40.5, -20.0, 40.4); //a
	glVertex3f(-20.8, -20.0, 40.4); //b
	glVertex3f(-20.8, -20.0, 40.0); //f
	glVertex3f(-40.5, -20.0, 40.0); //e
	glEnd();

	//berdiri 1
	glBegin(GL_QUADS);//depan
	glVertex3f(-40.5, -17.5, 40.4); //a
	glVertex3f(-39.8, -17.5, 40.4); //b
	glVertex3f(-39.8, 2, 40.4); //c
	glVertex3f(-40.5, 2, 40.4); //d
	glEnd();
	glBegin(GL_QUADS);//kiri
	glVertex3f(-40.5, -17.5, 40.4); //a
	glVertex3f(-40.5, 2, 40.4); //d
	glVertex3f(-40.5, 2, 40); //h
	glVertex3f(-40.5, -17.5, 40); //e
	glEnd();
	glBegin(GL_QUADS);//kanan
	glVertex3f(-39.8, -17.5, 40.4); //b
	glVertex3f(-39.8, 2, 40.4); //c
	glVertex3f(-39.8, 2, 40); //g
	glVertex3f(-39.8, -17.5, 40); //f
	glEnd();
	glBegin(GL_QUADS);//atas
	glVertex3f(-39.8, 2, 40.4); //c
	glVertex3f(-40.5, 2, 40.4); //d
	glVertex3f(-40.5, 2, 40); //h
	glVertex3f(-39.8, 2, 40); //g
	glEnd();
	glBegin(GL_QUADS);//bwh
	glVertex3f(-40.5, -17.5, 40.4); //a
	glVertex3f(-39.8, -17.5, 40.4); //b
	glVertex3f(-39.8, -17.5, 40); //f
	glVertex3f(-40.5, -17.5, 40); //e
	glEnd();

	//berdiri 2
	glBegin(GL_QUADS);//depan
	glVertex3f(-32.5, -17.5, 40.4); //a
	glVertex3f(-31.8, -17.5, 40.4); //b
	glVertex3f(-31.8, 2, 40.4);//c
	glVertex3f(-32.5, 2, 40.4); //d
	glEnd();
	glBegin(GL_QUADS);//blkg
	glVertex3f(-32.5, -17.5, 40); //e
	glVertex3f(-31.8, -17.5, 40); //f
	glVertex3f(-31.8, 2, 40);//g
	glVertex3f(-32.5, 2, 40); //h
	glEnd();
	glBegin(GL_QUADS);//kiri
	glVertex3f(-32.5, -17.5, 40.4); //a
	glVertex3f(-32.5, 2, 40.4); //d
	glVertex3f(-32.5, 2, 40); //h
	glVertex3f(-32.5, -17.5, 40); //e
	glEnd();
	glBegin(GL_QUADS);//kanan
	glVertex3f(-31.8, -17.5, 40); //b
	glVertex3f(-31.8, 2, 40);//c
	glVertex3f(-31.8, 2, 40);//g
	glVertex3f(-31.8, -17.5, 40); //f
	glEnd();
	glBegin(GL_QUADS);//atas
	glVertex3f(-31.8, 2, 40);//c
	glVertex3f(-32.5, 2, 40.4); //d
	glVertex3f(-32.5, 2, 40); //h
	glVertex3f(-31.8, 2, 40);//g
	glEnd();
	glBegin(GL_QUADS);//bwh
	glVertex3f(-32.5, -17.5, 40.4); //a
	glVertex3f(-31.8, -17.5, 40.4); //b
	glVertex3f(-31.8, -17.5, 40); //f
	glVertex3f(-32.5, -17.5, 40); //e
	glEnd();

	//berdiri3
	glBegin(GL_QUADS);
	glVertex3f(-29.5, -17.5, 40.4);
	glVertex3f(-28.8, -17.5, 40.4);
	glVertex3f(-28.8, 2, 40.2);
	glVertex3f(-29.5, 2, 40.2);
	glEnd();
	//berdiri4
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-21.5, -17.5, 40.4);
	glVertex3f(-20.8, -17.5, 40.4);
	glVertex3f(-20.8, 2, 40.2);
	glVertex3f(-21.5, 2, 40.2);
	glEnd();

	//miring atas
	glBegin(GL_QUADS);//dpn
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-40.5, 2.5, 40.4); //a
	glVertex3f(-36.15, 10.7, 40.4);//b
	glVertex3f(-36.15, 10.0, 40.4); //c
	glVertex3f(-39.8, 2.5, 40.4);//d
	glEnd();
	glBegin(GL_QUADS);//blkg
	glVertex3f(-40.5, 2.5, 40); //e
	glVertex3f(-36.15, 10.7, 40);//f
	glVertex3f(-36.15, 10.0, 40); //g
	glVertex3f(-39.8, 2.5, 40);//h
	glEnd();
	glBegin(GL_QUADS);//kiri
	glVertex3f(-40.5, 2.5, 40.4); //a
	glVertex3f(-39.8, 2.5, 40.4);//d
	glVertex3f(-39.8, 2.5, 40);//h
	glVertex3f(-40.5, 2.5, 40); //e
	glEnd();
	glBegin(GL_QUADS);//kanan
	glVertex3f(-36.15, 10.7, 40.4);//b
	glVertex3f(-36.15, 10.0, 40.4); //c
	glVertex3f(-36.15, 10.0, 40); //g
	glVertex3f(-36.15, 10.7, 40);//f
	glEnd();
	glBegin(GL_QUADS);//ats
	glVertex3f(-36.15, 10.0, 40.4); //c
	glVertex3f(-39.8, 2.5, 40.4);//d
	glVertex3f(-39.8, 2.5, 40);//h	
	glVertex3f(-36.15, 10.0, 40); //g
	glEnd();
	glBegin(GL_QUADS);//bwh
	glVertex3f(-40.5, 2.5, 40.4); //a
	glVertex3f(-36.15, 10.7, 40.4);//b
	glVertex3f(-36.15, 10.7, 40);//f
	glVertex3f(-40.5, 2.5, 40); //e
	glEnd();

	//miring atas2
	glBegin(GL_QUADS);//dpn
	glVertex3f(-32.5, 2.5, 40.4); //a
	glVertex3f(-36.15, 10.7, 40.4);//b
	glVertex3f(-36.15, 10.0, 40.4); //c
	glVertex3f(-31.8, 2.5, 40.4);//d
	glEnd();
	glBegin(GL_QUADS);//kiri
	glVertex3f(-32.5, 2.5, 40.4); //a
	glVertex3f(-31.8, 2.5, 40.4);//d
	glVertex3f(-31.8, 2.5, 40);//h
	glVertex3f(-32.5, 2.5, 40); //e
	glEnd();
	glBegin(GL_QUADS);//kanan		
	glVertex3f(-36.15, 10.7, 40.4);//b
	glVertex3f(-36.15, 10.0, 40.4); //c
	glVertex3f(-36.15, 10.0, 40); //g
	glVertex3f(-36.15, 10.7, 40);//f
	glEnd();
	glBegin(GL_QUADS);//atas		
	glVertex3f(-36.15, 10.0, 40.4); //c
	glVertex3f(-31.8, 2.5, 40.4);//d
	glVertex3f(-31.8, 2.5, 40);//h
	glVertex3f(-36.15, 10.0, 40); //g
	glEnd();
	glBegin(GL_QUADS);//bwh		
	glVertex3f(-32.5, 2.5, 40.4); //a
	glVertex3f(-36.15, 10.7, 40.4);//b
	glVertex3f(-36.15, 10.7, 40);//f
	glVertex3f(-32.5, 2.5, 40); //e
	glEnd();

	//miringatas3
	glBegin(GL_QUADS);//dpn
	glVertex3f(-29.5, 2.5, 40.4); //a
	glVertex3f(-25.15, 10.7, 40.4);//b
	glVertex3f(-25.15, 10.0, 40.4); //c
	glVertex3f(-28.8, 2.5, 40.4);//d
	glEnd();
	glBegin(GL_QUADS);//kri
	glVertex3f(-29.5, 2.5, 40.4); //a
	glVertex3f(-28.8, 2.5, 40.4);//d
	glVertex3f(-28.8, 2.5, 40);//h
	glVertex3f(-29.5, 2.5, 40); //e
	glEnd();
	glBegin(GL_QUADS);//kanan	
	glVertex3f(-25.15, 10.7, 40.4);//b
	glVertex3f(-25.15, 10.0, 40.4); //c
	glVertex3f(-25.15, 10.0, 40); //g
	glVertex3f(-25.15, 10.7, 40);//f
	glEnd();
	glBegin(GL_QUADS);//ats	
	glVertex3f(-25.15, 10.0, 40.4); //c
	glVertex3f(-28.8, 2.5, 40.4);//d
	glVertex3f(-28.8, 2.5, 40);//h
	glVertex3f(-25.15, 10.0, 40); //g
	glEnd();
	glBegin(GL_QUADS);//bwh
	glVertex3f(-29.5, 2.5, 40.4); //a
	glVertex3f(-25.15, 10.7, 40.4);//b
	glVertex3f(-25.15, 10.7, 40);//f
	glVertex3f(-29.5, 2.5, 40); //e
	glEnd();


	//miringatas4
	glBegin(GL_QUADS);//dpn
	glVertex3f(-21.5, 2.5, 40.4);//aa
	glVertex3f(-25.15, 10.0, 40.4);//b 
	glVertex3f(-25.15, 10.7, 40.4);//c
	glVertex3f(-20.8, 2.5, 40.4);//d	
	glEnd();
	glBegin(GL_QUADS);//kiri
	glVertex3f(-21.5, 2.5, 40.4);//aa
	glVertex3f(-20.8, 2.5, 40.4);//d
	glVertex3f(-20.8, 2.5, 40);//h
	glVertex3f(-21.5, 2.5, 40);//e	
	glEnd();
	glBegin(GL_QUADS);//knn
	glVertex3f(-25.15, 10.0, 40.4);//b 
	glVertex3f(-25.15, 10.7, 40.4);//c
	glVertex3f(-25.15, 10.7, 40);//g
	glVertex3f(-25.15, 10.0, 40);//f 
	glEnd();
	glBegin(GL_QUADS);//ats
	glVertex3f(-25.15, 10.7, 40.4);//c
	glVertex3f(-20.8, 2.5, 40.4);//d
	glVertex3f(-20.8, 2.5, 40);//h
	glVertex3f(-25.15, 10.7, 40);//g
	glEnd();
	glBegin(GL_QUADS);//bwh
	glVertex3f(-21.5, 2.5, 40.4);//aa
	glVertex3f(-25.15, 10.0, 40.4);//b
	glVertex3f(-25.15, 10.0, 40);//f
	glVertex3f(-21.5, 2.5, 40);//e 
	glEnd();
}
void dalam_jendela() {
	//dalam1
	glBegin(GL_QUADS);
	glColor3f(0.652941f, 0.652941f, 0.652941f);
	glVertex3f(-39.5, -18.8, 40.1);
	glVertex3f(-32.9, -18.8, 40.1);
	glVertex3f(-32.9, 2.3, 40.1);
	glVertex3f(-39.5, 2.3, 40.1);
	glEnd();
	glBegin(GL_QUADS);								//dalam2
	glColor3f(0.752941f, 0.752941f, 0.752941f);
	glVertex3f(-38.8, -18, 40.3);
	glVertex3f(-33.4, -18, 40.3);
	glVertex3f(-33.4, 1.5, 40.3);
	glVertex3f(-38.8, 1.5, 40.3);
	glEnd();
	glBegin(GL_QUADS);								//dalam3
	glColor3f(1.0f, 1.0f, 0.62f);
	glVertex3f(-38, -17.2, 40.4);
	glVertex3f(-34.2, -17.2, 40.4);
	glVertex3f(-34.2, 0.7, 40.4);
	glVertex3f(-38, 0.7, 40.4);
	glEnd();
	glBegin(GL_TRIANGLES);							//sgtg dlm1
	glColor3f(0.652941f, 0.652941f, 0.652941f);
	glVertex3f(-39.5, 2, 40.1);
	glVertex3f(-36.15, 9.5, 40.1);
	glVertex3f(-32.9, 2, 40.1);
	glEnd();

	glBegin(GL_TRIANGLES);							//sgtg dlm2
	glColor3f(0.752941f, 0.752941f, 0.752941f);
	glVertex3f(-38.8, 2.2, 40.3);
	glVertex3f(-36.15, 8.7, 40.3);
	glVertex3f(-33.4, 2.2, 40.3);
	glEnd();

	//	glBegin(GL_POINTS);							//sgtg dlm2
	//	glColor3f(0.0,0.0,0.0f);
	//	glVertex3f(-36.15, 7, 40.4);
	//glEnd();	
}
void jendelaa() {
	glPushMatrix();
	glTranslatef(61.3, 0, 0);
	jendela();
	glPopMatrix();
}

void beton() {
	//dpn
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-15.5, -35.0, 77.0);
	glVertex3f(-13.0, -35.0, 77.0);
	glVertex3f(-13.0, 12.0, 77.0);
	glVertex3f(-15.5, 12.0, 77.0);
	glEnd();
	//kiri
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-15.5, -35.0, 77.0);
	glVertex3f(-15.5, 12.0, 77.0);
	glVertex3f(-15.5, 12.0, 75.0);
	glVertex3f(-15.5, -35.0, 75.0);
	glEnd();
	//kanan
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-13.0, -35.0, 77.0);
	glVertex3f(-13.0, 12, 77.0);
	glVertex3f(-13.0, 12, 75.0);
	glVertex3f(-13.0, -35.0, 75.0);
	glEnd();
	//sampingg dpn
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-17.0, 10.0, 77.0); //a
	glVertex3f(-15.5, 10, 77.0); //b	
	glVertex3f(-15.5, 8, 77.0); //c
	glVertex3f(-17.0, 8, 77.0); //d
	glEnd();
	//samping blkg
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-17.0, 10.0, 40.1); //e
	glVertex3f(-15.5, 10, 40.1); //	f
	glVertex3f(-15.5, 8, 40.1); //g
	glVertex3f(-17.0, 8, 40.1); //h
	glEnd();
	//samping kiri
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-17.0, 10.0, 40.1); //e
	glVertex3f(-17.0, 10.0, 77.0); //a
	glVertex3f(-17.0, 8, 77.0); //d
	glVertex3f(-17.0, 8, 40.1); //h
	glEnd();
	//smping knn
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-15.5, 10, 40.1); //f
	glVertex3f(-15.5, 10, 76.0); //b	
	glVertex3f(-15.5, 8, 76.0); //c
	glVertex3f(-15.5, 8, 40.1); //g
	glEnd();
	//samping atas
	glBegin(GL_QUADS);
	glVertex3f(-17.0, 10.0, 77.0); //a
	glVertex3f(-15.5, 10, 77.0); //b
	glVertex3f(-15.5, 10, 40.1); //f
	glVertex3f(-17.0, 10.0, 40.1); //e
	glEnd();
	//kotakkecil dpn
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-15.5, 8.5, 77.0);
	glVertex3f(-11.5, 8.5, 77.0);
	glVertex3f(-11.5, 12.0, 77.0);
	glVertex3f(-15.5, 12.0, 77.0);
	glEnd();
	//[BATA KECIL DI ATAP SEGITIGA]
	glBegin(GL_QUADS);//dpn
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-15.5, 8.5, 75.0);
	glVertex3f(-11.5, 8.5, 75.0);
	glVertex3f(-11.5, 12.0, 75.0);
	glVertex3f(-15.5, 12.0, 75.0);
	glEnd();
	//kotak kecil kiri
	glBegin(GL_QUADS);
	glVertex3f(-15.5, 8.5, 77.0);
	glVertex3f(-15.5, 8.5, 75.0);
	glVertex3f(-15.5, 12.0, 75.0);
	glVertex3f(-15.5, 12.0, 77.0);
	glEnd();
	//kotak kecil knn
	glBegin(GL_QUADS);
	glVertex3f(-11.5, 8.5, 77.0);
	glVertex3f(-11.5, 8.5, 75.0);
	glVertex3f(-11.5, 12.0, 75.0);
	glVertex3f(-11.5, 12.0, 77.0);
	glEnd();
	//ktkatas
	glBegin(GL_QUADS);
	glVertex3f(-15.5, 12.0, 77.0);
	glVertex3f(-11.5, 12.0, 77.0);
	glVertex3f(-11.5, 12.0, 75.0);
	glVertex3f(-15.5, 12.0, 75.0);
	glEnd();
	//ktk bawah
	glBegin(GL_QUADS);
	glVertex3f(-15.5, 8.5, 77.0);
	glVertex3f(-11.5, 8.5, 77.0);
	glVertex3f(-11.5, 8.5, 75.0);
	glVertex3f(-15.5, 8.5, 75.0);
	glEnd();
	//2
	glBegin(GL_QUADS);//dpn
	glVertex3f(-12.38, 12, 77.0); //a
	glVertex3f(-9.03, 12, 77.0); 	//b
	glVertex3f(-9.03, 15.5, 77.0);	//c
	glVertex3f(-10.42, 15.5, 77.0); //d	
	glEnd();
	//blkg
	glBegin(GL_QUADS);
	glVertex3f(-12.38, 12, 75.0); //e
	glVertex3f(-9.03, 12, 75.0); 	//f
	glVertex3f(-9.03, 15.5, 75.0);	//g
	glVertex3f(-10.42, 15.5, 75.0); //h	
	glEnd();
	//kotak kecil kiri
	glBegin(GL_QUADS);
	glVertex3f(-12.38, 12, 77.0); //a
	glVertex3f(-10.42, 15.5, 77.0); //d	
	glVertex3f(-10.42, 15.5, 75.0); //h	
	glVertex3f(-12.38, 12, 75.0); //e
	glEnd();
	//kotak kecil knn
	glBegin(GL_QUADS);
	glVertex3f(-9.03, 12, 77.0); 	//b
	glVertex3f(-9.03, 15.5, 77.0);	//c
	glVertex3f(-9.03, 15.5, 75.0);	//g
	glVertex3f(-9.03, 12, 75.0); 	//f
	glEnd();
	//ktkatas
	glBegin(GL_QUADS);
	glVertex3f(-9.03, 15.5, 77.0);	//c
	glVertex3f(-10.42, 15.5, 77.0); //d
	glVertex3f(-10.42, 15.5, 75.0); //h
	glVertex3f(-9.03, 15.5, 75.0);	//g	
	glEnd();
	//ktk bawah
	glBegin(GL_QUADS);
	glVertex3f(-12.38, 12, 77.0); //a
	glVertex3f(-9.03, 12, 77.0); 	//b
	glVertex3f(-9.03, 12, 75.0); 	//f
	glVertex3f(-12.38, 12, 75.0); //e
	glEnd();
	//3
	glBegin(GL_QUADS);//dpn
	glVertex3f(-10.42, 15.5, 77.0); //a
	glVertex3f(-7.07, 15.5, 77.0); 	//b
	glVertex3f(-7.07, 19, 77.0);	//c
	glVertex3f(-8.49, 19, 77.0); //d	
	glEnd();
	//blkg
	glBegin(GL_QUADS);
	glVertex3f(-10.42, 15.5, 75.0); //e
	glVertex3f(-7.07, 15.5, 75.0); 	//f
	glVertex3f(-7.07, 19, 75.0);	//g
	glVertex3f(-8.49, 19, 75.0); //h
	glEnd();
	//kotak kecil kiri
	glBegin(GL_QUADS);
	glVertex3f(-10.42, 15.5, 77.0); //a
	glVertex3f(-8.49, 19, 77.0); //d
	glVertex3f(-8.49, 19, 75.0); //h
	glVertex3f(-10.42, 15.5, 75.0); //e
	glEnd();
	//kotak kecil knn
	glBegin(GL_QUADS);
	glVertex3f(-7.07, 15.5, 77.0); 	//b
	glVertex3f(-7.07, 19, 77.0);	//c
	glVertex3f(-7.07, 19, 75.0);	//g
	glVertex3f(-7.07, 15.5, 75.0); 	//f	
	glEnd();
	//ktkatas
	glBegin(GL_QUADS);
	glVertex3f(-7.07, 19, 77.0);	//c
	glVertex3f(-8.49, 19, 77.0); //d
	glVertex3f(-8.49, 19, 75.0); //h
	glVertex3f(-7.07, 19, 75.0);	//g	
	glEnd();
	//ktk bawah
	glBegin(GL_QUADS);
	glVertex3f(-10.42, 15.5, 77.0); //a
	glVertex3f(-7.07, 15.5, 77.0); 	//b
	glVertex3f(-7.07, 15.5, 75.0); 	//f
	glVertex3f(-10.42, 15.5, 75.0); //e	
	glEnd();
	//4
	glBegin(GL_QUADS);//dpn
	glVertex3f(-8.49, 19, 77.0); //a
	glVertex3f(-5.14, 19, 77.0); 	//b
	glVertex3f(-5.14, 22.5, 77.0);	//c
	glVertex3f(-6.53, 22.5, 77.0); //d	
	glEnd();
	//blkg
	glBegin(GL_QUADS);
	glVertex3f(-8.49, 19, 75.0); //e
	glVertex3f(-5.14, 19, 75.0); 	//f
	glVertex3f(-5.14, 22.5, 75.0);	//g
	glVertex3f(-6.53, 22.5, 75.0); //h
	glEnd();
	//kotak kecil kiri
	glBegin(GL_QUADS);
	glVertex3f(-8.49, 19, 77.0); //a
	glVertex3f(-6.53, 22.5, 77.0); //d
	glVertex3f(-6.53, 22.5, 75.0); //h
	glVertex3f(-8.49, 19, 75.0); //e
	glEnd();
	//kotak kecil knn
	glBegin(GL_QUADS);
	glVertex3f(-5.14, 19, 77.0); 	//b
	glVertex3f(-5.14, 22.5, 77.0);	//c
	glVertex3f(-5.14, 22.5, 75.0);	//g
	glVertex3f(-5.14, 19, 75.0); 	//f
	glEnd();
	//ktkatas
	glBegin(GL_QUADS);
	glVertex3f(-5.14, 22.5, 77.0);	//c
	glVertex3f(-6.53, 22.5, 77.0); //d
	glVertex3f(-6.53, 22.5, 75.0); //h
	glVertex3f(-5.14, 22.5, 75.0);	//g	
	glEnd();
	//ktk bawah
	glBegin(GL_QUADS);
	glVertex3f(-8.49, 19, 77.0); //a
	glVertex3f(-5.14, 19, 77.0); 	//b
	glVertex3f(-5.14, 19, 75.0); 	//f
	glVertex3f(-8.49, 19, 75.0); //e
	glEnd();

	//trakhir
	glBegin(GL_QUADS);//dpn
	glVertex3f(-6.53, 22.5, 77.0); //a
	glVertex3f(6.53, 22.5, 77.0); 	//b
	glVertex3f(4.26, 26.52, 77.0);	//c
	glVertex3f(-4.26, 26.52, 77.0); //d	
	glEnd();
	//blkg
	glBegin(GL_QUADS);
	glVertex3f(-6.53, 22.5, 75.0); //e
	glVertex3f(6.53, 22.5, 75.0); 	//f
	glVertex3f(4.26, 26.52, 75.0);	//g
	glVertex3f(-4.26, 26.52, 75.0); //h	
	glEnd();
	//kotak kecil kiri
	glBegin(GL_QUADS);
	glVertex3f(-6.53, 22.5, 77.0); //a
	glVertex3f(-4.26, 26.52, 77.0); //d
	glVertex3f(-4.26, 26.52, 75.0); //h	
	glVertex3f(-6.53, 22.5, 75.0); //e	
	glEnd();
	//kotak kecil knn
	glBegin(GL_QUADS);
	glVertex3f(6.53, 22.5, 77.0); 	//b
	glVertex3f(4.26, 26.52, 77.0);	//c
	glVertex3f(4.26, 26.52, 75.0);	//g
	glVertex3f(6.53, 22.5, 75.0); 	//f
	glEnd();
	//ktkatas
	glBegin(GL_QUADS);
	glVertex3f(4.26, 26.52, 77.0);	//c
	glVertex3f(-4.26, 26.52, 77.0); //d	
	glVertex3f(-4.26, 26.52, 75.0); //h
	glVertex3f(4.26, 26.52, 75.0);	//g	
	glEnd();
	//ktk bawah
	glBegin(GL_QUADS);
	glVertex3f(-6.53, 22.5, 77.0); //a
	glVertex3f(6.53, 22.5, 77.0); 	//b
	glVertex3f(6.53, 22.5, 75.0); 	//f
	glVertex3f(-6.53, 22.5, 75.0); //e
	glEnd();
	//lis putihputih
	glBegin(GL_QUADS);//dpn
	glColor3f(0.95f, 0.95f, 0.95f);
	glVertex3f(-4.26, 26.52, 77.5); //a
	glVertex3f(4.26, 26.52, 77.5); 	//b
	glVertex3f(3.5, 28, 77.5);	//c
	glVertex3f(-3.5, 28, 77.5); //d	
	glEnd();
	//blkg
	glBegin(GL_QUADS);
	glVertex3f(-4.26, 26.52, 75.0); //E
	glVertex3f(4.26, 26.52, 75.0); 	//F
	glVertex3f(3.5, 28, 75.0);	//G
	glVertex3f(-3.5, 28, 75.0); //H	
	glEnd();
	//kotak kecil kiri
	glBegin(GL_QUADS);
	glVertex3f(-4.26, 26.52, 77.5); //a
	glVertex3f(-3.5, 28, 77.5); //d	
	glVertex3f(-3.5, 28, 75.0); //H
	glVertex3f(-4.26, 26.52, 75.0); //E	
	glEnd();
	//kotak kecil knn
	glBegin(GL_QUADS);
	glVertex3f(4.26, 26.52, 77.5); 	//b
	glVertex3f(3.5, 28, 77.5);	//c
	glVertex3f(3.5, 28, 75.0);	//G
	glVertex3f(4.26, 26.52, 75.0); 	//F
	glEnd();
	//ktkatas
	glBegin(GL_QUADS);
	glVertex3f(3.5, 28, 77.5);	//c
	glVertex3f(-3.5, 28, 77.5); //d
	glVertex3f(-3.5, 28, 75.0); //H	
	glVertex3f(3.5, 28, 75.0);	//G
	glEnd();
	//ktk bawah
	glBegin(GL_QUADS);
	glVertex3f(-4.26, 26.52, 77.5); //a
	glVertex3f(4.26, 26.52, 77.5); 	//b
	glVertex3f(4.26, 26.52, 75.0); 	//F
	glVertex3f(-4.26, 26.52, 75.0); //E	
	glEnd();
}
void atap_sgtg() {
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.62f);
	glVertex3f(-13.5, 10, 75.0); //dpnA
	glVertex3f(13.5, 10, 75.0);//B
	glVertex3f(3.5, 28, 75.0);//C
	glVertex3f(-3.5, 28, 75.0); //D
	glEnd();
	glBegin(GL_QUADS);	//blkg			
	glVertex3f(-13.5, 10, 72.0); //E
	glVertex3f(13.5, 10, 72.0);//F
	glVertex3f(3.5, 28, 72.0);//G
	glVertex3f(-3.5, 28, 72.0); //H
	glEnd();
	glBegin(GL_QUADS);	//kiri
	glColor3f(0.647059f, 0.164706f, 0.164706f);
	glVertex3f(-13.5, 10, 75.0); //dpnA
	glVertex3f(-3.5, 28, 75.0); //D
	glVertex3f(-3.5, 28, 72.0); //H
	glVertex3f(-13.5, 10, 72.0); //E
	glEnd();
	glBegin(GL_QUADS);//kanan
	glVertex3f(13.5, 10, 75.0);//B
	glVertex3f(3.5, 28, 75.0);//C
	glVertex3f(3.5, 28, 72.0);//G
	glVertex3f(13.5, 10, 72.0);//F
	glEnd();
	glBegin(GL_QUADS);//atas
	glVertex3f(3.5, 28, 75.0);//C
	glVertex3f(-3.5, 28, 75.0); //D
	glVertex3f(-3.5, 28, 72.0); //H
	glVertex3f(3.5, 28, 72.0);//G
	glEnd();
	//kbs main
	//kanan
	glBegin(GL_QUADS);
	glColor3f(0.647059f, 0.164706f, 0.164706f);
	glVertex3f(15.0, 10.0, 40.1); 	//S
	glVertex3f(15.0, 10.0, 75.0); 	//W
	glVertex3f(0.0, 20.0, 75.0);	//X
	glVertex3f(0.0, 20.0, 40.1);	//T
	glEnd();
	//kiri
	glBegin(GL_QUADS);
	glColor3f(0.647059f, 0.164706f, 0.164706f);
	glVertex3f(0.0, 20.0, 40.1); //R
	glVertex3f(0.0, 20.0, 75.0); //V
	glVertex3f(-15.0, 10.0, 75.0); 	//Y
	glVertex3f(-15.0, 10.0, 40.1); 	//U
	glEnd();
	//atap kubus atas1
	glBegin(GL_QUADS);//dpn
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-3.5, 28, 75.0);//A
	glVertex3f(3.5, 28, 75.0); //B
	glVertex3f(3.5, 40, 75.0); //C
	glVertex3f(-3.5, 40, 75.0); //d
	glEnd();
	glBegin(GL_QUADS);//tgh
	glVertex3f(-3.5, 28, 72.0);//E
	glVertex3f(3.5, 28, 72.0); //F
	glVertex3f(3.5, 40, 72.0); //G
	glVertex3f(-3.5, 40, 72.0); //H
	glEnd();
	glBegin(GL_QUADS);//kiri1
	glVertex3f(-3.5, 28, 75.0);//A
	glVertex3f(-3.5, 40, 75.0); //d
	glVertex3f(-3.5, 40, 72.0); //H
	glVertex3f(-3.5, 28, 72.0);//E
	glEnd();
	glBegin(GL_QUADS);//kanan1
	glVertex3f(3.5, 28, 75.0); //B
	glVertex3f(3.5, 40, 75.0); //C
	glVertex3f(3.5, 40, 72.0); //G
	glVertex3f(3.5, 28, 72.0); //F
	glEnd();

	glBegin(GL_QUADS);//blkg
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-3.5, 10, 65);//ee
	glVertex3f(3.5, 10, 65.0); //ff
	glVertex3f(3.5, 40, 65.0); //gg
	glVertex3f(-3.5, 40, 65.0); //hh
	glEnd();
	glBegin(GL_QUADS);//kiri2
	glVertex3f(-3.5, 40, 72.0); //H
	glVertex3f(-3.5, 10, 72.0);//E	
	glVertex3f(-3.5, 10, 65);//ee
	glVertex3f(-3.5, 37, 65.0); //hh
	glEnd();
	glBegin(GL_QUADS);//kanan2
	glVertex3f(3.5, 10, 72.0); //F
	glVertex3f(3.5, 40, 72.0); //G	
	glVertex3f(3.5, 40, 65.0); //gg	
	glVertex3f(3.5, 10, 65.0); //ff
	glEnd();
	glBegin(GL_QUADS);	//atas
	glVertex3f(3.5, 40, 75.0); //C
	glVertex3f(-3.5, 40, 75.0); //d
	glVertex3f(-3.5, 40, 65.0); //hh
	glVertex3f(3.5, 40, 65.0); //gg	
	glEnd();
	//ataptopi
	glBegin(GL_QUADS);
	glColor3f(0.35f, 0.16, 0.14);	//depan
	glVertex3f(-5.5, 40, 78.0); //a
	glVertex3f(5.5, 40, 78.0); //b
	glVertex3f(3.5, 47, 72.5); //c
	glVertex3f(-3.5, 47, 72.5); //d	
	glEnd();
	glBegin(GL_QUADS);//blkg
	glVertex3f(-5.5, 40, 62.0); //e
	glVertex3f(5.5, 40, 62.0); //f
	glVertex3f(3.5, 47, 67.5); //g
	glVertex3f(-3.5, 47, 67.5); //h
	glEnd();
	glBegin(GL_QUADS);//kiri
	glVertex3f(-5.5, 40, 78.0); //a
	glVertex3f(-3.5, 47, 72.5); //d
	glVertex3f(-3.5, 47, 67.5); //h
	glVertex3f(-5.5, 40, 62.0); //e
	glEnd();
	glBegin(GL_QUADS);//kanan
	glVertex3f(5.5, 40, 78.0); //b
	glVertex3f(3.5, 47, 72.5); //c
	glVertex3f(3.5, 47, 67.5); //g
	glVertex3f(5.5, 40, 62.0); //f
	glEnd();
	glBegin(GL_QUADS);//bwh
	glVertex3f(-5.5, 40, 78.0); //a
	glVertex3f(5.5, 40, 78.0); //b
	glVertex3f(5.5, 40, 62.0); //f
	glVertex3f(-5.5, 40, 62.0); //e
	glEnd();
	glBegin(GL_QUADS);//atas
	glVertex3f(-3.5, 47, 72.5); //d
	glVertex3f(3.5, 47, 72.5); //c
	glVertex3f(3.5, 47, 67.5); //g
	glVertex3f(-3.5, 47, 67.5); //h
	glEnd();
	//atapteratas
	glBegin(GL_QUADS);//dpn
	glVertex3f(-3.5, 47, 72.5); //a
	glVertex3f(3.5, 47, 72.5); //b
	glVertex3f(1, 69, 70.5); //c
	glVertex3f(-1, 69, 70.5); //d	
	glEnd();
	glBegin(GL_QUADS);//blkg
	glVertex3f(-3.5, 47, 67.5); //e
	glVertex3f(3.5, 47, 67.5); //f
	glVertex3f(1, 69, 69.5); //g
	glVertex3f(-1, 69, 69.5); //h
	glEnd();
	glBegin(GL_QUADS);//kiri
	glVertex3f(-1, 69, 70.5); //d
	glVertex3f(-3.5, 47, 72.5); //a
	glVertex3f(-3.5, 47, 67.5); //e
	glVertex3f(-1, 69, 69.5); //h
	glEnd();
	glBegin(GL_QUADS);//kanan
	glVertex3f(3.5, 47, 72.5); //b
	glVertex3f(1, 69, 70.5); //c
	glVertex3f(1, 69, 69.5); //g
	glVertex3f(3.5, 47, 67.5); //f
	glEnd();
	glBegin(GL_QUADS);	//atas
	glVertex3f(1, 69, 70.5); //c
	glVertex3f(-1, 69, 70.5); //d
	glVertex3f(-1, 69, 69.5); //h
	glVertex3f(1, 69, 69.5); //g
	glEnd();

}

void salib() {
	glBegin(GL_QUADS);	//atasdiri
	glColor3f(0.35, 0.16, 0.14);
	glVertex3f(-0.5, 30, 76); //a
	glVertex3f(0.5, 30, 76); //b
	glVertex3f(0.5, 38, 76); //c
	glVertex3f(-0.5, 38, 76); //d
	glEnd();
	glBegin(GL_QUADS);	//blkg
	glVertex3f(-0.5, 30, 75); //e
	glVertex3f(0.5, 30, 75); //f
	glVertex3f(0.5, 38, 75); //g
	glVertex3f(-0.5, 38, 75); //h
	glBegin(GL_QUADS);	//kiri
	glVertex3f(-0.5, 30, 76); //a
	glVertex3f(-0.5, 38, 76); //d
	glVertex3f(-0.5, 38, 75); //h
	glVertex3f(-0.5, 30, 75); //e
	glEnd();
	glBegin(GL_QUADS);	//kanan	
	glVertex3f(0.5, 30, 76); //b
	glVertex3f(0.5, 38, 76); //c
	glVertex3f(0.5, 38, 75); //g
	glVertex3f(0.5, 30, 75); //f
	glEnd();
	glBegin(GL_QUADS);	//atas
	glVertex3f(-0.5, 38, 76); //d
	glVertex3f(0.5, 38, 76); //c
	glVertex3f(0.5, 38, 75); //g
	glVertex3f(-0.5, 38, 75); //h	
	glEnd();
	glBegin(GL_QUADS);	//bwh
	glVertex3f(-0.5, 30, 76); //a
	glVertex3f(0.5, 30, 76); //b
	glVertex3f(0.5, 30, 75); //f
	glVertex3f(-0.5, 30, 75); //e
	glEnd();
	glBegin(GL_QUADS);	//atasdatar
	glVertex3f(-2.5, 35, 76); //a
	glVertex3f(2.5, 35, 76); //b
	glVertex3f(2.5, 36, 76); //c
	glVertex3f(-2.5, 36, 76); //d
	glEnd();
	glBegin(GL_QUADS);	//blkg
	glVertex3f(-2.5, 35, 75); //e
	glVertex3f(2.5, 35, 75); //f
	glVertex3f(2.5, 36, 75); //g
	glVertex3f(-2.5, 36, 75); //h
	glEnd();
	glBegin(GL_QUADS);	//kiri
	glVertex3f(-2.5, 35, 76); //a
	glVertex3f(-2.5, 36, 76); //d
	glVertex3f(-2.5, 36, 75); //h
	glVertex3f(-2.5, 35, 75); //e
	glEnd();
	glBegin(GL_QUADS);	//kanan	
	glVertex3f(2.5, 35, 76); //b
	glVertex3f(2.5, 36, 76); //c
	glVertex3f(2.5, 36, 75); //g
	glVertex3f(2.5, 35, 75); //f
	glEnd();
	glBegin(GL_QUADS);	//atas
	glVertex3f(2.5, 36, 76); //c
	glVertex3f(-2.5, 36, 76); //d
	glVertex3f(-2.5, 36, 75); //h
	glVertex3f(2.5, 36, 75); //g
	glEnd();
	glBegin(GL_QUADS);	//bwh
	glVertex3f(-2.5, 35, 76); //a
	glVertex3f(2.5, 35, 76); //b
	glVertex3f(2.5, 35, 75); //f
	glVertex3f(-2.5, 35, 75); //e
	glEnd();
}

void beton2() {
	//dpn
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(15.5, -35.0, 77.0);
	glVertex3f(13.0, -35.0, 77.0);
	glVertex3f(13.0, 12.0, 77.0);
	glVertex3f(15.5, 12.0, 77.0);
	glEnd();
	//kiri
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(15.5, -35.0, 77.0);
	glVertex3f(15.5, 12.0, 77.0);
	glVertex3f(15.5, 12.0, 75.0);
	glVertex3f(15.5, -35.0, 75.0);
	glEnd();
	//kanan
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(13.0, -35.0, 77.0);
	glVertex3f(13.0, 12, 77.0);
	glVertex3f(13.0, 12, 75.0);
	glVertex3f(13.0, -35.0, 75.0);
	glEnd();
	//sampingg dpn
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(17.0, 10.0, 77.0); //a
	glVertex3f(15.5, 10, 77.0); //b	
	glVertex3f(15.5, 8, 77.0); //c
	glVertex3f(17.0, 8, 77.0); //d
	glEnd();
	//samping blkg
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(17.0, 10.0, 40.1); //e
	glVertex3f(15.5, 10, 40.1); //	f
	glVertex3f(15.5, 8, 40.1); //g
	glVertex3f(17.0, 8, 40.1); //h
	glEnd();
	//samping kiri
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(17.0, 10.0, 40.1); //e
	glVertex3f(17.0, 10.0, 77.0); //a
	glVertex3f(17.0, 8, 77.0); //d
	glVertex3f(17.0, 8, 40.1); //h
	glEnd();
	//smping knn
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(15.5, 10, 40.1); //f
	glVertex3f(15.5, 10, 76.0); //b	
	glVertex3f(15.5, 8, 76.0); //c
	glVertex3f(15.5, 8, 40.1); //g
	glEnd();
	//samping atas
	glBegin(GL_QUADS);
	glVertex3f(17.0, 10.0, 77.0); //a
	glVertex3f(15.5, 10, 77.0); //b
	glVertex3f(15.5, 10, 40.1); //f
	glVertex3f(17.0, 10.0, 40.1); //e
	glEnd();
	//kotakkecil dpn
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(15.5, 8.5, 77.0);
	glVertex3f(11.5, 8.5, 77.0);
	glVertex3f(11.5, 12.0, 77.0);
	glVertex3f(15.5, 12.0, 77.0);
	glEnd();
	//[BATA KECIL DI ATAP SEGITIGA]
	glBegin(GL_QUADS);//dpn
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(15.5, 8.5, 75.0);
	glVertex3f(11.5, 8.5, 75.0);
	glVertex3f(11.5, 12.0, 75.0);
	glVertex3f(15.5, 12.0, 75.0);
	glEnd();
	//kotak kecil kiri
	glBegin(GL_QUADS);
	glVertex3f(15.5, 8.5, 77.0);
	glVertex3f(15.5, 8.5, 75.0);
	glVertex3f(15.5, 12.0, 75.0);
	glVertex3f(15.5, 12.0, 77.0);
	glEnd();
	//kotak kecil knn
	glBegin(GL_QUADS);
	glVertex3f(11.5, 8.5, 77.0);
	glVertex3f(11.5, 8.5, 75.0);
	glVertex3f(11.5, 12.0, 75.0);
	glVertex3f(11.5, 12.0, 77.0);
	glEnd();
	//ktkatas
	glBegin(GL_QUADS);
	glVertex3f(15.5, 12.0, 77.0);
	glVertex3f(11.5, 12.0, 77.0);
	glVertex3f(11.5, 12.0, 75.0);
	glVertex3f(15.5, 12.0, 75.0);
	glEnd();
	//ktk bawah
	glBegin(GL_QUADS);
	glVertex3f(15.5, 8.5, 77.0);
	glVertex3f(11.5, 8.5, 77.0);
	glVertex3f(11.5, 8.5, 75.0);
	glVertex3f(15.5, 8.5, 75.0);
	glEnd();
	//2
	glBegin(GL_QUADS);//dpn
	glVertex3f(12.38, 12, 77.0); //a
	glVertex3f(9.03, 12, 77.0); 	//b
	glVertex3f(9.03, 15.5, 77.0);	//c
	glVertex3f(10.42, 15.5, 77.0); //d	
	glEnd();
	//blkg
	glBegin(GL_QUADS);
	glVertex3f(12.38, 12, 75.0); //e
	glVertex3f(9.03, 12, 75.0); 	//f
	glVertex3f(9.03, 15.5, 75.0);	//g
	glVertex3f(10.42, 15.5, 75.0); //h	
	glEnd();
	//kotak kecil kiri
	glBegin(GL_QUADS);
	glVertex3f(12.38, 12, 77.0); //a
	glVertex3f(10.42, 15.5, 77.0); //d	
	glVertex3f(10.42, 15.5, 75.0); //h	
	glVertex3f(12.38, 12, 75.0); //e
	glEnd();
	//kotak kecil knn
	glBegin(GL_QUADS);
	glVertex3f(9.03, 12, 77.0); 	//b
	glVertex3f(9.03, 15.5, 77.0);	//c
	glVertex3f(9.03, 15.5, 75.0);	//g
	glVertex3f(9.03, 12, 75.0); 	//f
	glEnd();
	//ktkatas
	glBegin(GL_QUADS);
	glVertex3f(9.03, 15.5, 77.0);	//c
	glVertex3f(10.42, 15.5, 77.0); //d
	glVertex3f(10.42, 15.5, 75.0); //h
	glVertex3f(9.03, 15.5, 75.0);	//g	
	glEnd();
	//ktk bawah
	glBegin(GL_QUADS);
	glVertex3f(12.38, 12, 77.0); //a
	glVertex3f(9.03, 12, 77.0); 	//b
	glVertex3f(9.03, 12, 75.0); 	//f
	glVertex3f(12.38, 12, 75.0); //e
	glEnd();
	//3
	glBegin(GL_QUADS);//dpn
	glVertex3f(10.42, 15.5, 77.0); //a
	glVertex3f(7.07, 15.5, 77.0); 	//b
	glVertex3f(7.07, 19, 77.0);	//c
	glVertex3f(8.49, 19, 77.0); //d	
	glEnd();
	//blkg
	glBegin(GL_QUADS);
	glVertex3f(10.42, 15.5, 75.0); //e
	glVertex3f(7.07, 15.5, 75.0); 	//f
	glVertex3f(7.07, 19, 75.0);	//g
	glVertex3f(8.49, 19, 75.0); //h
	glEnd();
	//kotak kecil kiri
	glBegin(GL_QUADS);
	glVertex3f(10.42, 15.5, 77.0); //a
	glVertex3f(8.49, 19, 77.0); //d
	glVertex3f(8.49, 19, 75.0); //h
	glVertex3f(10.42, 15.5, 75.0); //e
	glEnd();
	//kotak kecil knn
	glBegin(GL_QUADS);
	glVertex3f(7.07, 15.5, 77.0); 	//b
	glVertex3f(7.07, 19, 77.0);	//c
	glVertex3f(7.07, 19, 75.0);	//g
	glVertex3f(7.07, 15.5, 75.0); 	//f	
	glEnd();
	//ktkatas
	glBegin(GL_QUADS);
	glVertex3f(7.07, 19, 77.0);	//c
	glVertex3f(8.49, 19, 77.0); //d
	glVertex3f(8.49, 19, 75.0); //h
	glVertex3f(7.07, 19, 75.0);	//g	
	glEnd();
	//ktk bawah
	glBegin(GL_QUADS);
	glVertex3f(10.42, 15.5, 77.0); //a
	glVertex3f(7.07, 15.5, 77.0); 	//b
	glVertex3f(7.07, 15.5, 75.0); 	//f
	glVertex3f(10.42, 15.5, 75.0); //e	
	glEnd();
	//4
	glBegin(GL_QUADS);//dpn
	glVertex3f(8.49, 19, 77.0); //a
	glVertex3f(5.14, 19, 77.0); 	//b
	glVertex3f(5.14, 22.5, 77.0);	//c
	glVertex3f(6.53, 22.5, 77.0); //d	
	glEnd();
	//blkg
	glBegin(GL_QUADS);
	glVertex3f(8.49, 19, 75.0); //e
	glVertex3f(5.14, 19, 75.0); 	//f
	glVertex3f(5.14, 22.5, 75.0);	//g
	glVertex3f(6.53, 22.5, 75.0); //h
	glEnd();
	//kotak kecil kiri
	glBegin(GL_QUADS);
	glVertex3f(8.49, 19, 77.0); //a
	glVertex3f(6.53, 22.5, 77.0); //d
	glVertex3f(6.53, 22.5, 75.0); //h
	glVertex3f(8.49, 19, 75.0); //e
	glEnd();
	//kotak kecil knn
	glBegin(GL_QUADS);
	glVertex3f(5.14, 19, 77.0); 	//b
	glVertex3f(5.14, 22.5, 77.0);	//c
	glVertex3f(5.14, 22.5, 75.0);	//g
	glVertex3f(5.14, 19, 75.0); 	//f
	glEnd();
	//ktkatas
	glBegin(GL_QUADS);
	glVertex3f(5.14, 22.5, 77.0);	//c
	glVertex3f(6.53, 22.5, 77.0); //d
	glVertex3f(6.53, 22.5, 75.0); //h
	glVertex3f(5.14, 22.5, 75.0);	//g	
	glEnd();
	//ktk bawah
	glBegin(GL_QUADS);
	glVertex3f(8.49, 19, 77.0); //a
	glVertex3f(5.14, 19, 77.0); 	//b
	glVertex3f(5.14, 19, 75.0); 	//f
	glVertex3f(8.49, 19, 75.0); //e
	glEnd();
}
void pintu() {
	glBegin(GL_QUADS);//dpn
	glColor3f(0.35f, 0.16, 0.14);
	glVertex3f(-7.5, -35, 75.5); //a
	glVertex3f(7.5, -35, 75.5); //b
	glVertex3f(7.5, -4, 75.5); //c	
	glVertex3f(-7.5, -4, 75.5); //d
	glEnd();
	glBegin(GL_QUADS);//blkg
	glVertex3f(-7.5, -35, 75); //e
	glVertex3f(7.5, -35, 75); //f
	glVertex3f(7.5, -4, 75); //g	
	glVertex3f(-7.5, -4, 75); //h
	glEnd();
	glBegin(GL_QUADS);//kiri
	glVertex3f(-7.5, -35, 75.5); //a	
	glVertex3f(-7.5, -4, 75.5); //d	
	glVertex3f(-7.5, -4, 75); //h
	glVertex3f(-7.5, -35, 75); //e
	glEnd();
	glBegin(GL_QUADS);//kanan
	glVertex3f(7.5, -35, 75.5); //b
	glVertex3f(7.5, -4, 75.5); //c
	glVertex3f(7.5, -4, 75); //g	
	glVertex3f(7.5, -35, 75); //f	
	glEnd();
	glBegin(GL_QUADS);//atas
	glVertex3f(7.5, -4, 75.5); //c
	glVertex3f(-7.5, -4, 75.5); //d	
	glVertex3f(-7.5, -4, 75); //h
	glVertex3f(7.5, -4, 75); //g	
	glEnd();
	glBegin(GL_LINES);//tgh pintu diri
	glColor3f(0.25f, 0.16, 0.14);
	glVertex3f(0, -4, 75.6); //c
	glVertex3f(0, -34, 75.6); //d		
	glEnd();
	//gagang
	glBegin(GL_LINES);//tgh pintu diri
	glColor3f(0.8f, 0.498039, 0.196078);
	glVertex3f(-1, -14.5, 75.6); //c
	glVertex3f(-1, -17, 75.6); //d		
	glEnd();
	glBegin(GL_LINES);//tgh pintu diri
	glVertex3f(1, -14.5, 75.6); //c
	glVertex3f(1, -17, 75.6); //d		
	glEnd();
	//lis samping pintu
	glBegin(GL_LINES);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-7.5, -4., 75.6);
	glVertex3f(-7.5, -34, 75.6);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(7.5, -4., 75.6);
	glVertex3f(7.5, -34, 75.6);
	glEnd();
	glBegin(GL_LINES);//tgh pintu diri
	glColor3f(0.25f, 0.16, 0.14);
	glVertex3f(0, -4, 75.6); //c
	glVertex3f(0, -34, 75.6); //d		
	glEnd();


	
}
void semicircle() {
	glBegin(GL_LINE_STRIP);//atas
	glVertex3f(-7.65, -2.63, 75.5); //a
	glVertex3f(7.65, -2.63, 75.5); //b
	glVertex3f(6.6, -0.28, 75.5); //c
	glVertex3f(4.9, 1.69, 75.5); //d
	glVertex3f(2.95, 3.13, 75.5);//e
	glVertex3f(0, 4, 75.5);//f
	glVertex3f(-2.95, 3.13, 75.5);//-e
	glVertex3f(-4.9, 1.69, 75.5); //-d
	glVertex3f(-6.6, -0.28, 75.5); //-c
	glVertex3f(-7.65, -2.63, 75.5); //a
	glEnd();
}
void semicircle2() {
	glPushMatrix();
	glColor3f(0.952941f, 0.952941f, 0.952941f);
	glScalef(0.65, 0.65, 1);
	semicircle();
	glPopMatrix();
}
void circlee() {
	glBegin(GL_POLYGON);//atas
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-7.65, -2.63, 75.5); //a
	glVertex3f(7.65, -2.63, 75.5); //b
	glVertex3f(6.6, -0.28, 75.5); //c
	glVertex3f(4.9, 1.69, 75.5); //d
	glVertex3f(2.95, 3.13, 75.5);//e
	glVertex3f(0, 4, 75.5);//f
	glVertex3f(-2.95, 3.13, 75.5);//-e
	glVertex3f(-4.9, 1.69, 75.5); //-d
	glVertex3f(-6.6, -0.28, 75.5); //-c
	glEnd();
}
void circle2() {
	glPushMatrix();
	glScalef(0.6, 0.6, 1);
	circlee();
	glPopMatrix();
}
void bangun2_3() {
	//bangunan 2
	//front
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.62f);
	glVertex3f(122.0, -35.0, 150.0); //A
	glVertex3f(62.0, -35.0, 150.0); //B
	glVertex3f(62.0, 35.0, 150.0);	//C
	glVertex3f(122.0, 35.0, 150.0); 	//D
	glEnd();
	//belakan
	glBegin(GL_QUADS);
	glVertex3f(62.0, -35.0, -10.0); //A
	glVertex3f(122.0, -35.0, -10.0); //B
	glVertex3f(122.0, 35.0, -10.0);	//C
	glVertex3f(62.0, 35.0, -10.0); 	//D
	glEnd();
	//kanan
	glBegin(GL_QUADS);
	glVertex3f(122.0, -35.0, 150.0); //A
	glVertex3f(122.0, -35.0, -10.0);//B
	glVertex3f(122.0, 35.0, -10.0);	//C
	glVertex3f(122.0, 35.0, 150.0); //D
	glEnd();
	//kiri
	glBegin(GL_QUADS);
	glVertex3f(62.0, -35.0, 150.0); //A
	glVertex3f(62.0, -35.0, -10.0); //B
	glVertex3f(62.0, 35.0, -10.0);	//C
	glVertex3f(62.0, 35.0, 150.0); 	//D
	glEnd();

	//kbs_knn
	glBegin(GL_QUADS);
	glVertex3f(62.0, -35.0, 110.0); //A
	glVertex3f(62.0, -35.0, 75.0); //B
	glVertex3f(62.0, 10.0, 75.0);	//C
	glVertex3f(62.0, 10.0, 110.0); 	//D
	glEnd();
	//kbs_kr
	glBegin(GL_QUADS);
	glVertex3f(37.0, -35.0, 110.0); //A
	glVertex3f(37.0, -35.0, 75.0); //B
	glVertex3f(37.0, 10.0, 75.0);	//C
	glVertex3f(37.0, 10.0, 110.0); 	//D
	glEnd();
	//kbs_dpn
	glBegin(GL_QUADS);
	glVertex3f(62.0, -35.0, 110.0); //A
	glVertex3f(37.0, -35.0, 110.0); //B
	glVertex3f(37.0, 10.0, 110.0);	//C
	glVertex3f(62.0, 10.0, 110.0); 	//D
	glEnd();
	//kbs_blk
	glBegin(GL_QUADS);
	glVertex3f(62.0, -35.0, 75.0); //A
	glVertex3f(37.0, -35.0, 75.0); //B
	glVertex3f(37.0, 10.0, 75.0);	//C
	glVertex3f(62.0, 10.0, 75.0); 	//D
	glEnd();

	//bangunan 3
	//depan
	glBegin(GL_QUADS);
	glVertex3f(117.0, -35.0, -15.0); //A
	glVertex3f(57.0, -35.0, -15.0); 	//B
	glVertex3f(57.0, 55.0, -15.0);	//C
	glVertex3f(117.0, 55.0, -15.0); 	//D
	glEnd();
	//belakang
	glBegin(GL_QUADS);
	glVertex3f(117.0, -35.0, -65.0); //A
	glVertex3f(57.0, -35.0, -65.0); 	//B
	glVertex3f(57.0, 55.0, -65.0);	//C
	glVertex3f(117.0, 55.0, -65.0); 	//D
	glEnd();
	//kanan
	glBegin(GL_QUADS);
	glVertex3f(117.0, -35.0, -15.0); //A
	glVertex3f(117.0, -35.0, -65.0); 	//B
	glVertex3f(117.0, 55.0, -65.0);	//C
	glVertex3f(117.0, 55.0, -15.0); 	//D
	glEnd();
	//kiri
	glBegin(GL_QUADS);
	glVertex3f(57.0, -35.0, -15.0); //A
	glVertex3f(57.0, -35.0, -65.0); //B
	glVertex3f(57.0, 55.0, -65.0);	//C
	glVertex3f(57.0, 55.0, -15.0); 	//D
	glEnd();

	//atap
	//bangunan 2
		//kiri
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 0.62f);
	glVertex3f(62.0, 35.0, 150.0); 	//D
	glVertex3f(122.0, 35.0, 150.0); 	//P
	glVertex3f(95.0, 65.0, 153.0); //H
	glEnd();
	//kanan
	glBegin(GL_TRIANGLES);
	glVertex3f(62.0, 35.0, -10.0); 	//D
	glVertex3f(122.0, 35.0, -10.0); 	//P
	glVertex3f(95.0, 65.0, -13.0); //H
	glEnd();
	//blk
	glBegin(GL_QUADS);
	glColor3f(0.647059f, 0.164706f, 0.164706f);
	glVertex3f(122.0, 35.0, 150.0);	//C
	glVertex3f(122.0, 35.0, -10.0); //D
	glVertex3f(95.0, 65.0, -13.0); 	//P
	glVertex3f(95.0, 65.0, 153.0); 	//O
	glEnd();
	//dpn
	glBegin(GL_QUADS);
	glColor3f(0.647059f, 0.164706f, 0.164706f);
	glVertex3f(62.0, 35.0, 150.0);	//C
	glVertex3f(62.0, 35.0, -10.0); 	//D
	glVertex3f(95.0, 65.0, -13.0); 	//P
	glVertex3f(95.0, 65.0, 153.0); 	//O
	glEnd();
	//kbs_knn
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 0.62f);
	glVertex3f(37.0, 10.0, 110.0); //A
	glVertex3f(37.0, 10.0, 75.0); //B
	glVertex3f(37.0, 30.0, 92.5); 	//D
	glEnd();
	//kbs_kr
	glBegin(GL_TRIANGLES);
	glColor3f(0.647059f, 0.164706f, 0.164706f);
	glVertex3f(62.0, 10.0, 110.0); //A
	glVertex3f(62.0, 10.0, 75.0); //B
	glVertex3f(62.0, 30.0, 92.5); 	//D
	glEnd();
	//kbs_dpn
	glBegin(GL_QUADS);
	glColor3f(0.647059f, 0.164706f, 0.164706f);
	glVertex3f(62.0, 10.0, 110.0); //A
	glVertex3f(32.0, 10.0, 110.0); //B
	glVertex3f(32.0, 30.0, 92.5);	//C
	glVertex3f(62.0, 30.0, 92.5); 	//D
	glEnd();
	//kbs_blk
	glBegin(GL_QUADS);
	glColor3f(0.647059f, 0.164706f, 0.164706f);
	glVertex3f(62.0, 10.0, 75.0); //A
	glVertex3f(32.0, 10.0, 75.0); //B
	glVertex3f(32.0, 30.0, 92.5);	//C
	glVertex3f(62.0, 30.0, 92.5); 	//D
	glEnd();


	//bangunan 3
	//kiri
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 0.62f);
	glVertex3f(57.0, 55.0, -15.0); 	//D
	glVertex3f(117.0, 55.0, -15.0); 	//P
	glVertex3f(90.0, 85.0, -22.0); //H
	glEnd();
	//kanan
	glBegin(GL_TRIANGLES);
	glVertex3f(57.0, 55.0, -65.0); 	//D
	glVertex3f(117.0, 55.0, -65.0); 	//P
	glVertex3f(90.0, 85.0, -52.0); //H
	glEnd();
	//blk
	glBegin(GL_QUADS);
	glColor3f(0.647059f, 0.164706f, 0.164706f);
	glVertex3f(117.0, 55.0, -15.0);	//C
	glVertex3f(117.0, 55.0, -65.0); 	//D
	glVertex3f(90.0, 85.0, -52.0); 	//P
	glVertex3f(90.0, 85.0, -22.0); 	//O
	glEnd();
	//dpn
	glBegin(GL_QUADS);
	glColor3f(0.647059f, 0.164706f, 0.164706f);
	glVertex3f(57.0, 55.0, -15.0);	//C
	glVertex3f(57.0, 55.0, -65.0); 	//D
	glVertex3f(90.0, 85.0, -52.0); 	//P
	glVertex3f(90.0, 85.0, -22.0); 	//O
	glEnd();

	//bangunan 2
	//dasar1
	glBegin(GL_QUADS);
	glColor3f(0.55f, 0.55f, 0.55f);
	glVertex3f(62.0, -30.0, 113.0); //A
	glVertex3f(29.0, -30.0, 113.0); //B
	glVertex3f(29.0, -30.0, 72.0);	//C
	glVertex3f(62.0, -30.0, 72.0); 	//D
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(29.0, -35.0, 113.0); //A
	glVertex3f(29.0, -30.0, 113.0); //B
	glVertex3f(29.0, -30.0, 72.0);	//C
	glVertex3f(29.0, -35.0, 72.0); 	//D
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(62.0, -35.0, 113.0); //A
	glVertex3f(29.0, -35.0, 113.0); //B
	glVertex3f(29.0, -30.0, 113.0);	//C
	glVertex3f(62.0, -30.0, 113.0); //D
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(62.0, -35.0, 72.0); //A
	glVertex3f(29.0, -35.0, 72.0); //B
	glVertex3f(29.0, -30.0, 72.0);	//C
	glVertex3f(62.0, -30.0, 72.0); 	//D
	glEnd();
	//dasar2
	glBegin(GL_QUADS);
	glVertex3f(62.0, -32.0, 117.0); //A
	glVertex3f(26.0, -32.0, 117.0); //B
	glVertex3f(26.0, -32.0, 69.0);	//C
	glVertex3f(62.0, -32.0, 69.0); 	//D
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(26.0, -35.0, 117.0); //A
	glVertex3f(26.0, -32.0, 117.0); //B
	glVertex3f(26.0, -32.0, 69.0);	//C
	glVertex3f(26.0, -35.0, 69.0); 	//D
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(62.0, -35.0, 117.0); //A
	glVertex3f(26.0, -35.0, 117.0); //B
	glVertex3f(26.0, -32.0, 117.0);	//C
	glVertex3f(62.0, -32.0, 117.0); 	//D
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(62.0, -35.0, 69.0); //A
	glVertex3f(26.0, -35.0, 69.0); //B
	glVertex3f(26.0, -32.0, 69.0);	//C
	glVertex3f(62.0, -32.0, 69.0); 	//D
	glEnd();
	//dasar3
	glBegin(GL_QUADS);
	glVertex3f(62.0, -34.0, 120.0); //A
	glVertex3f(23.0, -34.0, 120.0); //B
	glVertex3f(23.0, -34.0, 66.0);	//C
	glVertex3f(62.0, -34.0, 66.0); 	//D
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(23.0, -35.0, 120.0); //A
	glVertex3f(23.0, -34.0, 120.0); //B
	glVertex3f(23.0, -34.0, 66.0);	//C
	glVertex3f(23.0, -35.0, 66.0); 	//D
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(62.0, -35.0, 120.0); //A
	glVertex3f(23.0, -35.0, 120.0); //B
	glVertex3f(23.0, -34.0, 120.0);	//C
	glVertex3f(62.0, -34.0, 120.0); 	//D
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(62.0, -35.0, 66.0); //A
	glVertex3f(23.0, -35.0, 66.0); //B
	glVertex3f(23.0, -34.0, 66.0);	//C
	glVertex3f(62.0, -34.0, 66.0); 	//D
	glEnd();

	//grs_hrz1
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, -35.0, 142.0); //A
	glVertex3f(61.9, -35.0, 140.0); //B
	glVertex3f(61.9, 35.0, 140.0);	//C
	glVertex3f(61.9, 35.0, 142.0); 	//D
	glEnd();
	//jendela_1a
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, -17.0, 138.0); //A
	glVertex3f(61.9, -17.0, 132.0); //B
	glVertex3f(61.9, 2.0, 132.0);	//C
	glVertex3f(61.9, 2.0, 138.0); 	//D
	glEnd();
	glBegin(GL_LINES);
	glLineWidth(0.2);
	glColor3f(0.652941f, 0.652941f, 0.652941f);
	glVertex3f(61.8, -17.0, 135.5);
	glVertex3f(61.8, 2.0, 135.5);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.252941f, 0.252941f, 0.252941f);
	glVertex3f(61.9, 2.5, 138.0); //A
	glVertex3f(61.9, 2.5, 132.0); //B
	glVertex3f(61.8, 10.0, 135.4);
	glEnd();
	//jendela_1b
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, -17.0, 130.0); //A
	glVertex3f(61.9, -17.0, 124.0); //B
	glVertex3f(61.9, 2.0, 124.0);	//C
	glVertex3f(61.9, 2.0, 130.0); 	//D
	glEnd();
	glBegin(GL_LINES);
	glLineWidth(0.2);
	glColor3f(0.652941f, 0.652941f, 0.652941f);
	glVertex3f(61.8, -17.0, 127.5);
	glVertex3f(61.8, 2.0, 127.5);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.252941f, 0.252941f, 0.252941f);
	glVertex3f(61.9, 2.5, 130.0); //A
	glVertex3f(61.9, 2.5, 124.0); //B
	glVertex3f(61.8, 10.0, 127.4);
	glEnd();
	//grs_hrz2
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, -35.0, 122.0); //A
	glVertex3f(61.9, -35.0, 120.0); //B
	glVertex3f(61.9, 35.0, 120.0);	//C
	glVertex3f(61.9, 35.0, 122.0); 	//D
	glEnd();
	//grs_hrz3
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, -35.0, 69.0); //A
	glVertex3f(61.9, -35.0, 66.0); //B
	glVertex3f(61.9, 35.0, 66.0);	//C
	glVertex3f(61.9, 35.0, 69.0); 	//D
	glEnd();
	//jendela_2a
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, -17.0, 64.0); //A
	glVertex3f(61.9, -17.0, 58.0); //B
	glVertex3f(61.9, 2.0, 58.0);	//C
	glVertex3f(61.9, 2.0, 64.0); 	//D
	glEnd();
	glBegin(GL_LINES);
	glLineWidth(0.2);
	glColor3f(0.652941f, 0.652941f, 0.652941f);
	glVertex3f(61.8, -17.0, 61.5);
	glVertex3f(61.8, 2.0, 61.5);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.252941f, 0.252941f, 0.252941f);
	glVertex3f(61.9, 2.5, 64.0); //A
	glVertex3f(61.9, 2.5, 58.0); //B
	glVertex3f(61.8, 10.0, 61.4);
	glEnd();
	//jendela_2b
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, -17.0, 57.0); //A
	glVertex3f(61.9, -17.0, 51.0); //B
	glVertex3f(61.9, 2.0, 51.0);	//C
	glVertex3f(61.9, 2.0, 57.0); 	//D
	glEnd();
	glBegin(GL_LINES);
	glLineWidth(0.2);
	glColor3f(0.652941f, 0.652941f, 0.652941f);
	glVertex3f(61.8, -17.0, 54.5);
	glVertex3f(61.8, 2.0, 54.5);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.252941f, 0.252941f, 0.252941f);
	glVertex3f(61.9, 2.5, 57.0); //A
	glVertex3f(61.9, 2.5, 51.0); //B
	glVertex3f(61.8, 10.0, 54.4);
	glEnd();
	//grs_hrz4
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, -35.0, 49.0); //A
	glVertex3f(61.9, -35.0, 46.0); //B
	glVertex3f(61.9, 35.0, 46.0);	//C
	glVertex3f(61.9, 35.0, 49.0); 	//D
	glEnd();
	//jendela_3a
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, -17.0, 44.0); //A
	glVertex3f(61.9, -17.0, 38.0); //B
	glVertex3f(61.9, 2.0, 38.0);	//C
	glVertex3f(61.9, 2.0, 44.0); 	//D
	glEnd();
	glBegin(GL_LINES);
	glLineWidth(0.2);
	glColor3f(0.652941f, 0.652941f, 0.652941f);
	glVertex3f(61.8, -17.0, 41.5);
	glVertex3f(61.8, 2.0, 41.5);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.252941f, 0.252941f, 0.252941f);
	glVertex3f(61.9, 2.5, 44.0); //A
	glVertex3f(61.9, 2.5, 38.0); //B
	glVertex3f(61.8, 10.0, 41.4);
	glEnd();
	//jendela_4a
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, -17.0, 31.0); //A
	glVertex3f(61.9, -17.0, 36.0); //B
	glVertex3f(61.9, 2.0, 36.0);	//C
	glVertex3f(61.9, 2.0, 31.0); 	//D
	glEnd();
	glBegin(GL_LINES);
	glLineWidth(0.2);
	glColor3f(0.652941f, 0.652941f, 0.652941f);
	glVertex3f(61.8, -17.0, 34.5);
	glVertex3f(61.8, 2.0, 34.5);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.252941f, 0.252941f, 0.252941f);
	glVertex3f(61.9, 2.5, 31.0); //A
	glVertex3f(61.9, 2.5, 36.0); //B
	glVertex3f(61.8, 10.0, 34.4);
	glEnd();
	//grs_hrz3
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, -35.0, 29.0); //A
	glVertex3f(61.9, -35.0, 26.0); //B
	glVertex3f(61.9, 35.0, 26.0);	//C
	glVertex3f(61.9, 35.0, 29.0); 	//D
	glEnd();
	//jendela_4a
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, -17.0, 24.0); //A
	glVertex3f(61.9, -17.0, 18.0); //B
	glVertex3f(61.9, 2.0, 18.0);	//C
	glVertex3f(61.9, 2.0, 24.0); 	//D
	glEnd();
	glBegin(GL_LINES);
	glLineWidth(0.2);
	glColor3f(0.652941f, 0.652941f, 0.652941f);
	glVertex3f(61.8, -17.0, 21.5);
	glVertex3f(61.8, 2.0, 21.5);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.252941f, 0.252941f, 0.252941f);
	glVertex3f(61.9, 2.5, 24.0); //A
	glVertex3f(61.9, 2.5, 18.0); //B
	glVertex3f(61.8, 10.0, 21.4);
	glEnd();
	//jendela_4b
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, -17.0, 17.0); //A
	glVertex3f(61.9, -17.0, 11.0); //B
	glVertex3f(61.9, 2.0, 11.0);	//C
	glVertex3f(61.9, 2.0, 17.0); 	//D
	glEnd();
	glBegin(GL_LINES);
	glLineWidth(0.2);
	glColor3f(0.652941f, 0.652941f, 0.652941f);
	glVertex3f(61.8, -17.0, 14.5);
	glVertex3f(61.8, 2.0, 14.5);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.252941f, 0.252941f, 0.252941f);
	glVertex3f(61.9, 2.5, 17.0); //A
	glVertex3f(61.9, 2.5, 11.0); //B
	glVertex3f(61.8, 10.0, 14.4);
	glEnd();
	//grs_hrz4
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, -35.0, 9.0); //A
	glVertex3f(61.9, -35.0, 7.0); //B
	glVertex3f(61.9, 35.0, 7.0);	//C
	glVertex3f(61.9, 35.0, 9.0); 	//D
	glEnd();
	//grs_vrt
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(61.9, 22.0, 150.0); //A
	glVertex3f(61.9, 22.0, -10.0); //B
	glVertex3f(61.9, 25.0, -10.0);	//C
	glVertex3f(61.9, 25.0, 150.0); 	//D
	glEnd();

	//bangunan 2
	//pintu
	glBegin(GL_QUADS);
	glColor3f(0.35f, 0.16, 0.14);
	glVertex3f(36.9, -34.0, 100.0); //A
	glVertex3f(36.9, -34.0, 85.0); //B
	glVertex3f(36.9, -4.0, 85.0);	//C
	glVertex3f(36.9, -4.0, 100.0); 	//D
	glEnd();
	glBegin(GL_LINES);//tgh pintu diri
	glColor3f(0.25f, 0.16, 0.14);
	glVertex3f(36.9, -4, 92.5); //c
	glVertex3f(36.9, -34, 92.5); //d		
	glEnd();

	//tiang_1
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(36.0, -35.0, 112.0); //A
	glVertex3f(36.0, -35.0, 107.0); //B
	glVertex3f(36.0, 10.0, 107.0);	//C
	glVertex3f(36.0, 10.0, 112.0); 	//D
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(39.0, -35.0, 112.0); //A
	glVertex3f(39.0, -35.0, 107.0); //B
	glVertex3f(39.0, 10.0, 107.0);	//C
	glVertex3f(39.0, 10.0, 112.0); 	//D
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(39.0, -35.0, 112.0); //A
	glVertex3f(36.0, -35.0, 112.0); //B
	glVertex3f(36.0, 10.0, 112.0);	//C
	glVertex3f(39.0, 10.0, 112.0); 	//D
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(39.0, -35.0, 107.0); //A
	glVertex3f(36.0, -35.0, 107.0); //B
	glVertex3f(36.0, 10.0, 107.0);	//C
	glVertex3f(39.0, 10.0, 107.0); 	//D
	glEnd();
	//tiang_2
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(36.0, -35.0, 77.0); //A
	glVertex3f(36.0, -35.0, 72.0); //B
	glVertex3f(36.0, 10.0, 72.0);	//C
	glVertex3f(36.0, 10.0, 77.0); 	//D
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(39.0, -35.0, 77.0); //A
	glVertex3f(39.0, -35.0, 72.0); //B
	glVertex3f(39.0, 10.0, 72.0);	//C
	glVertex3f(39.0, 10.0, 77.0); 	//D
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(39.0, -35.0, 77.0); //A
	glVertex3f(36.0, -35.0, 77.0); //B
	glVertex3f(36.0, 10.0, 77.0);	//C
	glVertex3f(39.0, 10.0, 77.0); 	//D
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(39.0, -35.0, 72.0); //A
	glVertex3f(36.0, -35.0, 72.0); //B
	glVertex3f(36.0, 10.0, 72.0);	//C
	glVertex3f(39.0, 10.0, 72.0); 	//D
	glEnd();

//tangga panjang
	glBegin(GL_QUADS);//atas
	glColor3f(0.55f, 0.55f, 0.55f);
	glVertex3f(62.0, -32.0, 150.0);	//a
	glVertex3f(39.0, -32.0, 150.0); 	//b
	glVertex3f(39.0, -32.0, -10.0); 	//c
	glVertex3f(62.0, -32.0, -10.0); 	//d
	glEnd();
	glBegin(GL_QUADS);//bwh
	glVertex3f(62.0, -35.0, 150.0);	//e
	glVertex3f(39.0, -35.0, 150.0); 	//f
	glVertex3f(39.0, -35.0, -10.0); 	//g
	glVertex3f(62.0, -35.0, -10.0); 	//h
	glEnd();
	
	glBegin(GL_QUADS);//kiri
	glVertex3f(62.0, -32.0, 150.0);	//a
	glVertex3f(62.0, -32.0, -10.0); 	//d
	glVertex3f(62.0, -35.0, -10.0); 	//h
	glVertex3f(62.0, -35.0, 150.0);	//e
	glEnd();
		
	glBegin(GL_QUADS);//knn
	glVertex3f(39.0, -32.0, 150.0); 	//b
	glVertex3f(39.0, -32.0, -10.0); 	//c
	glVertex3f(39.0, -35.0, -10.0); 	//g
	glVertex3f(39.0, -35.0, 150.0); 	//f
	glEnd();
	glBegin(GL_QUADS);//blkg
	glVertex3f(39.0, -32.0, -10.0); 	//c
	glVertex3f(62.0, -32.0, -10.0); 	//d
	glVertex3f(62.0, -35.0, -10.0); 	//h
	glVertex3f(39.0, -35.0, -10.0); 	//g

	glEnd();
	glBegin(GL_QUADS);//dpn
	glVertex3f(62.0, -32.0, 150.0);	//a
	glVertex3f(39.0, -32.0, 150.0); 	//b
	glVertex3f(39.0, -35.0, 150.0); 	//f
	glVertex3f(62.0, -35.0, 150.0);	//e
	glEnd();


}

void bangun2_3a() {
	glPushMatrix();
	glTranslatef(13, 0, 0);
	bangun2_3();
	glPopMatrix();
}
void stengling1() {
	glBegin(GL_LINE_LOOP);//depan
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-11.93, -3.28, 90);	//a
	glVertex3f(-9.97, -3.28, 90);	//b
	glVertex3f(-9.31, -0.94, 90); //c
	glVertex3f(-7.92, 1.25, 90); //d
	glVertex3f(-5.96, 3.1, 90); //e
	glVertex3f(-3.72, 4.57, 90);	//f
	glVertex3f(0, 5.1, 90);	//g
	glVertex3f(3.72, 4.57, 90);	//-f
	glVertex3f(5.96, 3.1, 90); //-e
	glVertex3f(7.92, 1.25, 90); //-d
	glVertex3f(9.31, -0.94, 90); //-c
	glVertex3f(9.97, -3.28, 90);	//-b
	glVertex3f(11.93, -3.28, 90);	//-a
	glVertex3f(11.04, -0.27, 90);//o
	glVertex3f(9.42, 2.09, 90); //p
	glVertex3f(7.49, 4.29, 90); //q
	glVertex3f(4.9, 5.87, 90);	//r
	glVertex3f(0, 6.61, 90);//ssss
	glVertex3f(-4.9, 5.87, 90);	//-r
	glVertex3f(-7.49, 4.29, 90); //-q
	glVertex3f(-9.42, 2.09, 90); //-p
	glVertex3f(-11.04, -0.27, 90);//o
	glEnd();
	glBegin(GL_LINE_LOOP);//blkg
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glVertex3f(-11.93, -3.28, 75);	//a
	glVertex3f(-9.97, -3.28, 75);	//b
	glVertex3f(-9.31, -0.94, 75); //c
	glVertex3f(-7.92, 1.25, 75); //d
	glVertex3f(-5.96, 3.1, 75); //e
	glVertex3f(-3.72, 4.57, 75);	//f
	glVertex3f(0, 5.1, 75);	//g
	glVertex3f(3.72, 4.57, 75);	//-f
	glVertex3f(5.96, 3.1, 75); //-e
	glVertex3f(7.92, 1.25, 75); //-d
	glVertex3f(9.31, -0.94, 75); //-c
	glVertex3f(9.97, -3.28, 75);	//-b
	glVertex3f(11.93, -3.28, 75);	//-a
	glVertex3f(11.04, -0.27, 75);//o
	glVertex3f(9.42, 2.09, 75); //p
	glVertex3f(7.49, 4.29, 75); //q
	glVertex3f(4.9, 5.87, 75);	//r
	glVertex3f(0, 6.61, 75);//ssss
	glVertex3f(-4.9, 5.87, 75);	//-r
	glVertex3f(-7.49, 4.29, 75); //-q
	glVertex3f(-9.42, 2.09, 75); //-p
	glVertex3f(-11.04, -0.27, 75);//o
	glEnd();
	glBegin(GL_POLYGON);//atap kiriluar cerobong
	glVertex3f(-11.93, -3.28, 90);	//a
	glVertex3f(-11.04, -0.27, 90);//o
	glVertex3f(-9.42, 2.09, 90); //-p
	glVertex3f(-7.49, 4.29, 90); //-q
	glVertex3f(-4.9, 5.87, 90);	//-r
	glVertex3f(0, 6.61, 90);//ssss
	glVertex3f(0, 6.61, 75);//ssss
	glVertex3f(-4.9, 5.87, 75);	//-r
	glVertex3f(-7.49, 4.29, 75); //-q
	glVertex3f(-9.42, 2.09, 75); //-p
	glVertex3f(-11.04, -0.27, 75);//o
	glVertex3f(-11.93, -3.28, 75);	//a
	glEnd();

	glBegin(GL_POLYGON);//atap kiri dlm cerobong
	glVertex3f(-9.97, -3.28, 90);	//b
	glVertex3f(-9.31, -0.94, 90); //c
	glVertex3f(-7.92, 1.25, 90); //d
	glVertex3f(-5.96, 3.1, 90); //e
	glVertex3f(-3.72, 4.57, 90);	//f
	glVertex3f(0, 5.1, 90);	//g
	glVertex3f(0, 5.1, 75);	//g
	glVertex3f(-3.72, 4.57, 75);	//f
	glVertex3f(-5.96, 3.1, 75); //e
	glVertex3f(-7.92, 1.25, 75); //d
	glVertex3f(-9.31, -0.94, 75); //c
	glVertex3f(-9.97, -3.28, 75);	//b
	glEnd();

	glBegin(GL_POLYGON);//atap kanan dlm crobong
	glVertex3f(9.97, -3.28, 90);	//-b
	glVertex3f(9.31, -0.94, 90); //-c
	glVertex3f(7.92, 1.25, 90); //-d
	glVertex3f(5.96, 3.1, 90); //-e
	glVertex3f(3.72, 4.57, 90);	//-f
	glVertex3f(0, 5.1, 90);	//g
	glVertex3f(0, 5.1, 75);	//g
	glVertex3f(3.72, 4.57, 75);	//-f
	glVertex3f(5.96, 3.1, 75); //-e
	glVertex3f(7.92, 1.25, 75); //-d
	glVertex3f(9.31, -0.94, 75); //-c
	glVertex3f(9.97, -3.28, 75);	//-b
	glEnd();

	glBegin(GL_POLYGON);//kanan luar
	glVertex3f(11.93, -3.28, 90);	//-a
	glVertex3f(11.04, -0.27, 90);//o
	glVertex3f(9.42, 2.09, 90); //p
	glVertex3f(7.49, 4.29, 90); //q
	glVertex3f(4.9, 5.87, 90);	//r
	glVertex3f(0, 6.61, 90);//ssss
	glVertex3f(0, 6.61, 75);//ssss
	glVertex3f(4.9, 5.87, 75);	//r
	glVertex3f(7.49, 4.29, 75); //q
	glVertex3f(9.42, 2.09, 75); //p
	glVertex3f(11.04, -0.27, 75);//o
	glVertex3f(11.93, -3.28, 75);	//-a
	glEnd();

	glBegin(GL_QUADS);//betonkiridpn
	glVertex3f(-12.77, -4.5, 90);//a
	glVertex3f(-9.97, -4.5, 90);//b
	glVertex3f(-9.97, -3.28, 90);//c
	glVertex3f(-12.77, -3.28, 90);//d
	glEnd();
	glBegin(GL_QUADS);//betonkiriblkg
	glVertex3f(-12.77, -4.5, 75);//e
	glVertex3f(-9.97, -4.5, 75);//f
	glVertex3f(-9.97, -3.28, 75);//g
	glVertex3f(-12.77, -3.28, 75);//h
	glEnd();
	glBegin(GL_QUADS);//betonkiriKIRI
	glVertex3f(-12.77, -4.5, 90);//a
	glVertex3f(-12.77, -3.28, 90);//d
	glVertex3f(-12.77, -3.28, 75);//h
	glVertex3f(-12.77, -4.5, 75);//e
	glEnd();
	glBegin(GL_QUADS);//betonkiriKanan
	glVertex3f(-9.97, -4.5, 90);//b
	glVertex3f(-9.97, -3.28, 90);//c
	glVertex3f(-9.97, -3.28, 75);//g
	glVertex3f(-9.97, -4.5, 75);//f
	glEnd();
	glBegin(GL_QUADS);//betonkiribwh
	glVertex3f(-12.77, -4.5, 90);//a
	glVertex3f(-9.97, -4.5, 90);//b
	glVertex3f(-9.97, -4.5, 75);//f
	glVertex3f(-12.77, -4.5, 75);//e
	glEnd();

	//SEBELAH KANAN
	glBegin(GL_QUADS);//betonkiridpn
	glVertex3f(12.77, -4.5, 90);//a
	glVertex3f(9.97, -4.5, 90);//b
	glVertex3f(9.97, -3.28, 90);//c
	glVertex3f(12.77, -3.28, 90);//d
	glEnd();
	glBegin(GL_QUADS);//betonkiriblkg
	glVertex3f(12.77, -4.5, 75);//e
	glVertex3f(9.97, -4.5, 75);//f
	glVertex3f(9.97, -3.28, 75);//g
	glVertex3f(12.77, -3.28, 75);//h
	glEnd();
	glBegin(GL_QUADS);//betonkiriKIRI
	glVertex3f(12.77, -4.5, 90);//a
	glVertex3f(12.77, -3.28, 90);//d
	glVertex3f(12.77, -3.28, 75);//h
	glVertex3f(12.77, -4.5, 75);//e
	glEnd();
	glBegin(GL_QUADS);//betonkiriKanan
	glVertex3f(9.97, -4.5, 90);//b
	glVertex3f(9.97, -3.28, 90);//c
	glVertex3f(9.97, -3.28, 75);//g
	glVertex3f(9.97, -4.5, 75);//f
	glEnd();
	glBegin(GL_QUADS);//betonkiribwh
	glVertex3f(12.77, -4.5, 90);//a
	glVertex3f(9.97, -4.5, 90);//b
	glVertex3f(9.97, -4.5, 75);//f
	glVertex3f(12.77, -4.5, 75);//e
	glEnd();
}
void dalam_jendela12() {
	glPushMatrix();
	glTranslatef(11.1, 0, 0);
	dalam_jendela();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(61.4, 0, 0);
	dalam_jendela();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(72.3, 0, 0);
	dalam_jendela();
	glPopMatrix();
}
void pohonCemara() {
	//batang
	glColor3f(0.8, 0.5, 0.2);
	glPushMatrix();
	glScalef(0.2, 2, 0.2);
	glutSolidSphere(1.0, 20, 16);
	glPopMatrix();
	//daun
	glColor3f(0.137255, 0.556863, 0.137255);
	glPushMatrix();
	glScalef(1, 1, 1.0);
	glTranslatef(0, 1, 0);
	glRotatef(270, 1, 0, 0);
	glutSolidCone(1, 3, 10, 1);
	glPopMatrix();
	glPushMatrix();
	glScalef(1, 1, 1.0);
	glTranslatef(0, 2, 0);
	glRotatef(270, 1, 0, 0);
	glutSolidCone(1, 3, 10, 1);
	glPopMatrix();
	glPushMatrix();
	glScalef(1, 1, 1.0);
	glTranslatef(0, 3, 0);
	glRotatef(270, 1, 0, 0);
	glutSolidCone(1, 3, 10, 1);
	glPopMatrix();
}
void aspalbwpohon(){
	//tangga panjang
	glBegin(GL_QUADS);//atas
	glColor3f(0.60f, 0.60f, 0.60f);
	glVertex3f(15.0, -34.8, 500.0);	//a
	glVertex3f(72.0, -34.8, 500.0); 	//b
	glVertex3f(72.0, -34.8, 40.0); 	//c
	glVertex3f(15.0, -34.8, 40.0); 	//d
	glEnd();
	glBegin(GL_QUADS);//bwh
	glVertex3f(15.0, -35.0, 500.0);	//e
	glVertex3f(72.0, -35.0, 500.0); //f
	glVertex3f(72.0, -35.0, 40.0); 	//g
	glVertex3f(15.0, -35.0, 40.0); 	//h
	glEnd();
	
}
void tampil(void) {
	if (is_depth)
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else
		glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.47f, 0.47f, 0.47f);
	//ground
	glBegin(GL_QUADS);
	glVertex3f(-200.0f, -35.5f, -500.0f);
	glVertex3f(-200.0f, -35.5f, 500.0f);
	glVertex3f(200.0f, -35.5f, 500.0f);
	glVertex3f(200.0f, -35.5f, -500.0f);
	glEnd();
	building();
	atap();
	kotakotak();
	kotakotak2();
	bata();
	bata2();
	jendela();
	jendelaa();
	beton();
	atap_sgtg();
	beton2();
	salib();
	pintu();
	bangun2_3a();
	semicircle2();
	circle2();
	dalam_jendela();
	dalam_jendela12();
	aspalbwpohon();

	glPushMatrix();
	glTranslatef(-87,0,0);
	aspalbwpohon();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	semicircle();
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.452941f, 0.452941f, 0.452941f);
	glTranslatef(0, 3, 1);
	stengling1();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 0, 0);
	glTranslatef(-80, -16, 80);
	glScalef(10, 10, 10);
	pohonCemara();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-80, -16, 120);
	glScalef(10, 10, 10);
	pohonCemara();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-80, -16, 160);
	glScalef(10, 10, 10);
	pohonCemara();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-80, -16, 200);
	glScalef(10, 10, 10);
	pohonCemara();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-80, -16, 240);
	glScalef(10, 10, 10);
	pohonCemara();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-80, -16, 260);
	glScalef(10, 10, 10);
	pohonCemara();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-80, -16, 300);
	glScalef(10, 10, 10);
	pohonCemara();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(50, -16, 200);
	glScalef(10, 10, 10);
	pohonCemara();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(50.5, -16, 250);
	glScalef(10, 10, 10);
	pohonCemara();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(50.5, -16, 300);
	glScalef(10, 10, 10);
	pohonCemara();
	glPopMatrix();
	
	glutSwapBuffers();
}
void keyboard(unsigned char key, int x, int y) {
	switch (key) {
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
		glTranslatef(0.0, 0.0, -3.0);
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
	if (tinggi == 0) tinggi = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
	glTranslatef(0.0, -5.0, -150.0);
	glMatrixMode(GL_MODELVIEW);
}
