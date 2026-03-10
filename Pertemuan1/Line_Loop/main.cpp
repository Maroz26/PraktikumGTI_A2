#include <gl/glut.h>
void Triangle(void)

{
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.0f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.5, 0.0);
	glVertex2f(0.3, 0.5);
	glVertex2f(-0.3, 0.5);
	glVertex2f(-0.5, 0.0);
	glEnd();

	glFlush();
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Ammar Rozan Rusyaidan");
	glutDisplayFunc(Triangle);
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
	glutMainLoop();
	
	return 0;
}

