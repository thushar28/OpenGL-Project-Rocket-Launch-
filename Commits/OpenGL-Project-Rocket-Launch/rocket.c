#include<stdio.h>
#include<GL/glut.h>
#include<string.h>
void myInit()
{
	glClearColor(0.5,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,1000.0,0.0,1000.0);
	//glMatrixMode(GL_MODELVIEW);
}
void display()
{
	glBegin(GL_POLYGON);
	glColor3f(1,0.5,0);
	glVertex2i(500,800);
	glVertex2i(450,650);
	glVertex2i(550,650);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(450,650);
	glVertex2i(550,650);
	glVertex2i(550,470);
	glVertex2i(450,470);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.2);
	glVertex2i(450,470);
	glVertex2i(550,470);
	glVertex2i(550,120);
	glVertex2i(450,120);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.1,0.1);
	glVertex2i(519,400);
	glVertex2i(490,400);
	glVertex2i(490,120);
	glVertex2i(519,120);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2i(519,400);
	glVertex2i(490,400);
	glVertex2i(505,450);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.1,0.1);
	glVertex2i(550,400);
	glVertex2i(550,120);
	glVertex2i(578,120);
	glVertex2i(578,400);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2i(550,450);
	glVertex2i(578,400);
	glVertex2i(550,400);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.1,0.1);
	glVertex2i(450,400);
	glVertex2i(450,120);
	glVertex2i(422,120);
	glVertex2i(422,400);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2i(450,450);
	glVertex2i(422,400);
	glVertex2i(450,400);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6,0.6,0.6);
	glVertex2i(450,120);
	glVertex2i(550,120);
	glVertex2i(570,90);
	glVertex2i(430,90);
	glEnd();
	glFlush();
	
}

int main(int argc,char *argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(1300,1300);
	glutCreateWindow("Rocket Launch");
	glutDisplayFunc(display);
	myInit();
	glutMainLoop();
}						

		
