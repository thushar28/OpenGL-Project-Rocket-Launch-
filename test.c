#include<stdio.h>
#include<GL/glut.h>
#include<string.h>
void watch()
{
  glClearColor(0.0,0.0,0.0,0);
  glClear(GL_COLOR_BUFFER_BIT);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0,1000,0,1000);
  glMatrixMode(GL_MODELVIEW);

	glBegin(GL_POLYGON);
	glColor3f(0.6 ,0.6 ,0.6);//top box
	glVertex2i(450,1000);
	glVertex2i(550,1000);
	glVertex2i(550,900);
	glVertex2i(450,900);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(105, 39, 13);//outer rectangle
	glVertex2i(250,900);
	glVertex2i(750,900);
	glVertex2i(750,500);
	glVertex2i(250,500);
	glEnd();
	glBegin(GL_POLYGON);//inner rectangle
	glColor3f(0.6 ,0.6 ,0.6);
	glVertex2i(300,850);
	glVertex2i(700,850);
	glVertex2i(700,550);
	glVertex2i(300,550);
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
	glutDisplayFunc(watch);
	//myInit();
	glutMainLoop();
}			
