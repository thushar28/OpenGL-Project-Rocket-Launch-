void watch()
{
	glClearColor(0.0,0.0,0.0,0.0);
 	glClear(GL_COLOR_BUFFER_BIT);
  	glMatrixMode(GL_PROJECTION);
  	glLoadIdentity();
  	gluOrtho2D(0,1000,0,1000);
	int t;
	char str1='5';
	char str2='4';
	char str3='3';
	char str4='2';
	char str5='1';
	char str6='0';
 	glColor3f(1,0,0);
	glRasterPos2f(500,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1);
	glFlush();
	for(t=0;t<=10000;t++)
	glClear(GL_COLOR_BUFFER_BIT);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2);
	glFlush();
	for(t=0;t<=10000;t++)
	glClear(GL_COLOR_BUFFER_BIT);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3);
	glFlush();
	for(t=0;t<=10000;t++)
	glClear(GL_COLOR_BUFFER_BIT);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4);
	glFlush();
	for(t=0;t<=10000;t++)
	glClear(GL_COLOR_BUFFER_BIT);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5);
	glFlush();
	for(t=0;t<=10000;t++)
	glClear(GL_COLOR_BUFFER_BIT);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6);
	glFlush();
}
