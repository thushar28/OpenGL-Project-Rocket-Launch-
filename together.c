#include<stdio.h>
#include<GL/glut.h>
#include<string.h>
int i=0;
//int id1;
char * str;
/*void myInit()
{
	glClearColor(0.5,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,1000.0,0.0,1000.0);
	glMatrixMode(GL_MODELVIEW);
}*/
void display()
{
glClearColor(0.1,0.1,0.1,0);
glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,1000,0,1000);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
	char str1[]="MANGALORE INSTITUTE OF TECHNOLOGY AND ENGINEERING";
glColor3f(1,0,0);
glRasterPos2f(200,950);
for(i=0;i<strlen(str1);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
        }

char str2[]="MOODBIDRI,MANGALORE";
glColor3f(0.5,1.0,1);
glRasterPos2f(335,900);
for(i=0;i<strlen(str2);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
        }

char str3[]="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
glColor3f(2,5,1);
glRasterPos2f(220,820);
for(i=0;i<strlen(str3);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
        }

char str4[]="COMPUTER GRAPHICS AND VISUALIZATION";
glColor3f(1,0.5,0);
glRasterPos2f(280,770);
for(i=0;i<strlen(str4);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);
        }

char str5[]="   MINI PROJECT";
glColor3f(1,1,1);
glRasterPos2f(390,690);
for(i=0;i<strlen(str5);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[i]);
        }

char str6[]="   ON";
glColor3f(1,0,0);
glRasterPos2f(440,640);
for(i=0;i<strlen(str6);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[i]);
        }

char str16[]="                 ROCKET LAUNCH";
glColor3f(1,1,0);
glRasterPos2f(320,580);
for(i=0;i<strlen(str16);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str16[i]);
        }

char str7[]="TEAM MEMBERS:";
glColor3f(1,0,0);
glRasterPos2f(0,400);
for(i=0;i<strlen(str7);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[i]);
        }

char str8[]="THILOTH B SHETTY 4MT19CS171";
glColor3f(1.0,1.0,1);
glRasterPos2f(0,350);
for(i=0;i<strlen(str8);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }

char str9[]="THUSHAR S RAO 4MT19CS173";
glColor3f(1.0,1.0,1);
glRasterPos2f(0,300);
for(i=0;i<strlen(str9);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str9[i]);
        }

char str10[]="6th SEM";
glColor3f(0,1,1);
glRasterPos2f(0,250);
for(i=0;i<strlen(str10);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str10[i]);
        }

char str11[]="PROJECT GUIDE:";
glColor3f(1,0,0);
glRasterPos2f(820,400);
for(i=0;i<strlen(str11);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str11[i]);
        }

char str12[]="AISHWARYA M BHAT";
glColor3f(2,0.5,1);
glRasterPos2f(820,350);
for(i=0;i<strlen(str12);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str12[i]);
        }
   
    char str13[]="SUNITHA N V";
glColor3f(2,0.5,1);
glRasterPos2f(820,300);
for(i=0;i<strlen(str13);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str13[i]);
        }


char str14[]="DEPT OF CSE";
glColor3f(0,1,1);
glRasterPos2f(820,250);
for(i=0;i<strlen(str14);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str14[i]);
        }

char str15[]="ENTER 'L or l' TO Launch";
glColor3f(0,1,0);
glRasterPos2f(350,30);
for(i=0;i<strlen(str15);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str15[i]);
        }
glEnd();
glFlush();
}
void mydisplay()
{
	glClearColor(0.5,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,1000.0,0.0,1000.0);
	glMatrixMode(GL_MODELVIEW);
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
void keys(unsigned char key,int x,int y)
{
	if(key=='L'|| key=='l')
	{
		glutDisplayFunc(mydisplay);
	}
	else if(key=='y')
	{
		glutDisplayFunc(display);
	}
	glutPostRedisplay();
}

int main(int argc,char *argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(1300,1300);
	glutCreateWindow("Rocket Launch");
	glutDisplayFunc(display);
	glutKeyboardFunc(keys);
	//myInit();
	glutMainLoop();
}			



		
