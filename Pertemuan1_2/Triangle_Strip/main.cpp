#include <gl/glut.h>

void TriangleStrip(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.0f);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex3f(-0.5, -0.3, 0.0);
	glVertex3f(-0.5, 0.3, 0.0);
	glVertex3f(0.0, -0.3, 0.0);
	glVertex3f(0.0, 0.3, 0.0);
	glVertex3f(0.5, -0.3, 0.0);
	glVertex3f(0.5, 0.3, 0.0);
	glEnd();
	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Ammar Rozan Rusyaidan");
	glutDisplayFunc(TriangleStrip);
	glClearColor(0.0f,0.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}
