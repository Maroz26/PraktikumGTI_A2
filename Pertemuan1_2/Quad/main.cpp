#include <gl/glut.h>

void Quads(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.0f);
	glBegin(GL_QUADS);
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(-0.5,  0.5, 0.0);
	glVertex3f( 0.5,  0.5, 0.0);
	glVertex3f( 0.5, -0.5, 0.0);
	glEnd();
	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Ammar Rozan Rusyaidan");
	glutDisplayFunc(Quads);
	glClearColor(0.0f,0.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}
