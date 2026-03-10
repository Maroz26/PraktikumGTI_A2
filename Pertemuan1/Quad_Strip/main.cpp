#include <gl/glut.h>

void quadstrip(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.0f);
	glBegin(GL_QUAD_STRIP);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(-0.5,-0.3,0.0);
	glVertex3f(-0.5, 0.3,0.0);
	glVertex3f(-0.2,-0.3,0.0);
	glVertex3f(-0.2, 0.3,0.0);
	glColor3f(0.0,1.0,0.0);
	glVertex3f(0.2,-0.3,0.0);
	glVertex3f(0.2, 0.3,0.0);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.5,-0.3,0.0);
	glVertex3f(0.5, 0.3,0.0);
	glEnd();
	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Ammar Rozan Rusyaidan");
	glutDisplayFunc(quadstrip);
	glClearColor(0.0f,0.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}
