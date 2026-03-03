

#include <GL/glut.h>

void Point(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(1.0f);
	
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.0, 0.0, 0.0);
	glEnd();
	
	glFlush();
	
}

int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowsSize(640, 480);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("biru");
	glutDisplayFunc(Point);
	glClearColor (0.0f, 0.0f, 1.0f, 1.0f);
	glutMainLoop ();
	
	return 0;
}

