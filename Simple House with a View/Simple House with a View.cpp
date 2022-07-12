#include <GL/glut.h>
#include <windows.h>  

void display(){
    glClearColor(0.7, 0.1, 1.0, 3.2); 
	glClear(GL_COLOR_BUFFER_BIT); 
	//menyeting kotak 
	glBegin(GL_QUADS);
	glColor3f(0.4f, 3.0f, 3.0f);
	glVertex2f(0.4f, 0.3f); 
	glVertex2f(-0.4f, 0.3f); 
	glVertex2f(-0.4f, -0.3f); 
	glVertex2f(0.4f, -0.3f);
	glEnd();
	glFlush();
	
	glBegin(GL_TRIANGLES); 
	glColor3f(2.0f, 0.0f, 0.0f); 
	glVertex2f(-0.4f, 0.3f); 
	glVertex2f(0.4f, 0.3f); 
	glVertex2f(0.0f, 0.75f); 
	glEnd();
	glFlush(); 
	
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.1f, 1.0f);
	glVertex2f(0.35f, 0.6f); 
	glVertex2f(0.25f, 0.6f); 
	glVertex2f(0.25f, 0.47f); 
	glVertex2f(0.35f, 0.35f);
	glEnd();
	glFlush();
	
	//pintu
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.5f, 0.0f);
	glVertex2f(0.1f, 0.0f); 
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(-0.1f, -0.3f); 
	glVertex2f(0.1f, -0.3f);
	glEnd();
	glFlush();
	
	//jalan teras
	glBegin(GL_QUADS);
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(0.1f, -0.3f); 
	glVertex2f(-0.1f, -0.3f); 
	glVertex2f(-0.2f, -1.0f); 
	glVertex2f(0.2f, -1.0f);
	glEnd();
	glFlush();
	
	//jendela-jendelaan
	glBegin(GL_QUADS);
	glColor3f(2.2f, 3.0f, 0.5f);
	glVertex2f(0.35f, 0.2f); 
	glVertex2f(0.15f, 0.2f); 
	glVertex2f(0.15f, 0.07f); 
	glVertex2f(0.35f, 0.07f);
	glEnd();
	glFlush();
	
	//garis jendela miring
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.35f, 0.14f); 
	glVertex2f(0.15f, 0.14f); 
	glEnd();
	glFlush();
	
	//garisjendelaatasbawah
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.25f, 0.2f); 
	glVertex2f(0.25f, 0.07); 
	glEnd();
	glFlush();

	//rumput1.0
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f); // Warna  ijo
	glVertex2f(-0.85f, -0.3f); 
	glVertex2f(-0.75f, -0.3f); 
	glVertex2f(-0.8f, -0.05f); 
	glEnd();
	glFlush(); 
	glEnd();

	//rumput1.1
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f); // Warna  
	glVertex2f(-0.8f, -0.3f); 
	glVertex2f(-0.65f, -0.3f); 
	glVertex2f(-0.75f, -0.01f);
	glEnd();
	glFlush(); 
	glEnd();
	
	//rumput1.3
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f); // Warna  
	glVertex2f(-0.7f, -0.3f); 
	glVertex2f(-0.6f, -0.3f); 
	glVertex2f(-0.65f, -0.03f); 
	glEnd();
	glFlush(); 
	glEnd();
	
	
	//pagarkiri tiang1 tdr
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.2f, -0.65f); 
	glVertex2f(-1.0f, -0.65f); 
	glVertex2f(-1.0f, -0.68f); 
	glVertex2f(-0.2f, -0.68f);
	glEnd();
	glFlush();
	
	//pagarkiri tiang2 tidur
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.2f, -0.77f); 
	glVertex2f(-1.0f, -0.77f); 
	glVertex2f(-1.0f, -0.84f); 
	glVertex2f(-0.2f, -0.84f);
	glEnd();
	glFlush();
	
	//pagarkiri tiang3 tdr
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.2f, -0.93f); 
	glVertex2f(-1.0f, -0.93f); 
	glVertex2f(-1.0f, -0.96f); 
	glVertex2f(-0.2f, -0.96f);
	glEnd();
	glFlush();
	
	//pagarkiri tiang1 diri
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.2f, -0.65f); 
	glVertex2f(-0.29f, -0.65f); 
	glVertex2f(-0.29f, -1.0f); 
	glVertex2f(-0.2f, -1.0f);
	glEnd();
	glFlush();
	
	//pagarkiri tiang2 diri
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.39f, -0.65f); 
	glVertex2f(-0.48f, -0.65f); 
	glVertex2f(-0.48f, -1.0f); 
	glVertex2f(-0.39f, -1.0f);
	glEnd();
	glFlush();
	
	//pagarkiri tiang3 diri
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.58f, -0.65f);  
	glVertex2f(-0.66f, -0.65f); 
	glVertex2f(-0.66f, -1.0f); 
	glVertex2f(-0.58f, -1.0f);
	glEnd();
	glFlush();
	
	//pagarkiri tiang4 diri
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.76f, -0.65f); 
	glVertex2f(-0.85f, -0.65f); 
	glVertex2f(-0.85f, -1.0f); 
	glVertex2f(-0.76f, -1.0f);
	glEnd();
	glFlush();
	
	
	//pagarkiri tiang4 diri
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.95f, -0.65f); 
	glVertex2f(-1.04f, -0.65f); 
	glVertex2f(-1.04f, -1.0f); 
	glVertex2f(-0.95f, -1.0f);
	glEnd();
	glFlush();
	
	
	//pagarkanan tiang1 tdr
	
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.2f, -0.65f); 
	glVertex2f(1.0f, -0.65f); 
	glVertex2f(1.0f, -0.68f); 
	glVertex2f(0.2f, -0.68f);
	glEnd();
	glFlush();
	
	//pagarkanan tiang2 tidur
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.2f, -0.77f); 
	glVertex2f(1.0f, -0.77f); 
	glVertex2f(1.0f, -0.84f); 
	glVertex2f(0.2f, -0.84f);
	glEnd();
	glFlush();
	
	//pagarkanan tiang3 tdr
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.2f, -0.93f); 
	glVertex2f(1.0f, -0.93f); 
	glVertex2f(1.0f, -0.96f); 
	glVertex2f(0.2f, -0.96f);
	glEnd();
	glFlush();
	
	//pagarkanan tiang1 diri
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.2f, -0.65f); 
	glVertex2f(0.29f, -0.65f); 
	glVertex2f(0.29f, -1.0f); 
	glVertex2f(0.2f, -1.0f);
	glEnd();
	glFlush();
	
	//pagarknn tiang2 diri
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.39f, -0.65f); 
	glVertex2f(0.48f, -0.65f); 
	glVertex2f(0.48f, -1.0f); 
	glVertex2f(0.39f, -1.0f);
	glEnd();
	glFlush();
	
	//pagarknn tiang3 diri
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.58f, -0.65f); 
	glVertex2f(0.66f, -0.65f); 
	glVertex2f(0.66f, -1.0f); 
	glVertex2f(0.58f, -1.0f);
	glEnd();
	glFlush();
	
	//pagarknn tiang4 diri
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.76f, -0.65f); 
	glVertex2f(0.85f, -0.65f); 
	glVertex2f(0.85f, -1.0f); 
	glVertex2f(0.76f, -1.0f);
	glEnd();
	glFlush();
	
	
	//pagarkiri tiang4 diri
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.95f, -0.65f); 
	glVertex2f(1.04f, -0.65f); 
	glVertex2f(1.04f, -1.0f); 
	glVertex2f(0.95f, -1.0f);
	glEnd();
	glFlush();
	
	//tiangbendera
	glBegin(GL_QUADS);
	glColor3f(0.6f, 0.16f, 0.16f);
	glVertex2f(-0.89f, 0.35f); 
	glVertex2f(-0.9f, 0.35f); 
	glVertex2f(-0.9f, -0.3f); 
	glVertex2f(-0.89f, -0.3f);
	glEnd();
	glFlush();
	
	//benderamerah
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.68f, 0.35f); 
	glVertex2f(-0.9f, 0.35f); 
	glVertex2f(-0.9f, 0.2f); 
	glVertex2f(-0.68f, 0.2f);
	glEnd();
	glFlush();
	
	//benderaputih
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.68f, 0.28f); 
	glVertex2f(-0.9f, 0.28f); 
	glVertex2f(-0.9f, 0.2f); 
	glVertex2f(-0.68f, 0.2f);
	glEnd();
	glFlush();
	
	
	//rumput2.0
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f); 
	glVertex2f(0.75f, -0.3f);
	glVertex2f(0.85f, -0.3f);  
	glVertex2f(0.8f, 0.05f); 
	glEnd();
	glFlush(); 
	glEnd();

	//rumput2.1
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f); // Warna  
	glVertex2f(0.8f, -0.3f); 
	glVertex2f(0.65f, -0.3f); 
	glVertex2f(0.75f, 0.01f);
	glEnd();
	glFlush(); 
	glEnd();
	
	//rumput2.3
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f); // Warna  
	glVertex2f(0.7f, -0.3f); 
	glVertex2f(0.6f, -0.3f); 
	glVertex2f(0.65f, 0.03f); 
	glEnd();
	glFlush(); 
	glEnd();

}

int main(int argc, char**argv){ //inisialisasi glut
	glutInit(&argc, argv);
	glutCreateWindow("Rumah-rumahan Ribka (672019327)"); //memasang judul dalam windows kecil kita
	glutInitWindowSize(320,320); //mengatur ukuran lebar x tinggi ukuran windows kita
	glutInitWindowPosition(50,50); //posisi windows di bagian pojok kiri atas 
	glutDisplayFunc(display); //memanggil fungsi display untuk mmbuat bentuk benda
	glutMainLoop(); //proses perulangan
	glutMainLoop();
	return 0;
	
	
}












