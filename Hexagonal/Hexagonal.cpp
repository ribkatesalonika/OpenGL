#include <gl/glut.h>
#include <math.h>

void init(void){
	glClearColor(0.0,0.0,0.0,0.0);						// bg Putih
	glMatrixMode(GL_PROJECTION);						// mengatur proyeksi
	glLoadIdentity();									// memanggil matiks identitas					//ukuran garis
	glOrtho(-20.0, 20.0, -20.0, 20.0, -20.0, 20.0);     // membuat kotak tempat objek yang sedang digambar
	glViewport(40, 400, 60, 300);						// menentukan titik awal dan titik akhir
}

void ngon(int n,  float cx, float cy, float radius, float rotAngle){
	double angle, angleInc;
	int k;
	if(n<3) return;
	angle = rotAngle*3.14159265/176;		//mengatur rotasi
	angleInc = 2*3.14159265/n;				//mengatur bentuk
	glVertex2f(radius*cos(angle)+cx, radius*sin(angle)+cy);
	for(k=0; k<n ; k++){
		angle += angleInc;
		glVertex2f(radius*cos(angle)+cx, radius*sin(angle)+cy);
	}
}

void display(void){
	double angleInc, j;
	glClear(GL_COLOR_BUFFER_BIT);			
	glBegin(GL_LINE_LOOP);				
		glColor3f(0.0, 0.0, 1.0);			
		for(j=1; j<100; j++){
		glColor3f(15.0-(j*0.35), 0.0+(j*0.05), 0.0+(j*0.015));
		ngon(6,0,0,10-(j*0.2),j*3);
		}				
	glEnd();								//memastikan gambar bisa dieksekusi
	glutSwapBuffers();						// fungsi perpindahan
}

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);			//set dimensi
	glutInitWindowSize(600,600);							//ukuran window
	glutInitWindowPosition(50,50);							//set posisi window
	glutCreateWindow("Ribka Tesalonika_672019327");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0 ;
}
