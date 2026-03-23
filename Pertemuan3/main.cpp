#include <GL/glut.h>
#include <math.h>

void gambar_lingkaran(float ukuran){
	#define PI 3.1415926535898
	glBegin(GL_POLYGON);
	GLint titik_circle = 100;
	
	float sudut;
	for (int i=0 ;i <titik_circle; i++){
		sudut = 2*PI * i / titik_circle;

		glVertex2f(ukuran *cos(sudut),ukuran * sin(sudut));
		
		}
	glEnd();
	

}	


void gambar_roda(){
	glPushMatrix();
	
	glColor3f(0.3, 0.3, 0.3);
	gambar_lingkaran(0.2);
	
	glColor3f(1.0, 1.0, 1.0);
	gambar_lingkaran(0.1);
	
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	
    float sudut;
    int titik = 100;
    for(int i = 0; i < titik; i++){
        sudut = 2 * 3.1415926535898 * i / titik;
        glVertex2f(0.1 * cos(sudut), 0.1 * sin(sudut)); 
    }
    
	glEnd();
	
	glPopMatrix();
	
}

float sudut_roda = 0.0;


void gambar_mobil(){
	glPushMatrix();
	glColor3f(139.0/255.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.8, 0.0);
	glVertex2f(0.8, 0.0);
	glVertex2f(0.8, 0.4);
	glVertex2f(-0.8, 0.4);
	
	glEnd();
	
	/*atas mobil*/
	
	glBegin(GL_POLYGON);
	    glVertex2f(-0.4, 0.4);
	    glVertex2f(0.4, 0.4);
	    glVertex2f(0.1, 0.75);
	    glVertex2f(-0.3, 0.7);
	glEnd();
	
	/* roda kiri */
	
	glPushMatrix();
	glTranslatef(-0.5, -0.1,0.0);
	glRotatef(sudut_roda, 0.0, 0.0, 1.0);
	gambar_roda();
	glPopMatrix();
	
	/*roda kanan*/
	glPushMatrix();
	glTranslatef(0.5,-0.1,0.0);
	glRotatef(sudut_roda, 0.0, 0.0, 1.0);
	gambar_roda();
	glPopMatrix();
	
}



void show(){
	glClear(GL_COLOR_BUFFER_BIT);
	gambar_mobil();
	glFlush();
}


/*untuk memutr roda*/
void jalan(int a) {
    sudut_roda = sudut_roda + 6.0;     
    if(sudut_roda > 360) {
     sudut_roda = sudut_roda - 360;
 }
    glutPostRedisplay();      
    glutTimerFunc(16, jalan, 0); 
}


int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitWindowSize(654, 654);
	glutCreateWindow("Ammar Rozan Rusyaidan");
	
	

	glutDisplayFunc(show);
	glutTimerFunc(16, jalan, 0);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glutMainLoop();
	return 0;
}
