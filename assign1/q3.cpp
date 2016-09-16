#include <stdio.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    //For red
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
	glVertex2i(10,20);
	glVertex2i(10,30);
	glVertex2i(30,20);
	glVertex2i(30,10);
    glEnd();
	 
    glBegin(GL_POLYGON);

	glVertex2i(20,35);
	glVertex2i(20,45);
	glVertex2i(40,35);
	glVertex2i(40,25);
    glEnd();
	
    glBegin(GL_POLYGON);

	glVertex2i(30,50);
	glVertex2i(30,60);
	glVertex2i(50,50);
	glVertex2i(50,40);
    glEnd();
//for blue
 glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

	glVertex2i(10,30);
	glVertex2i(20,35);
	glVertex2i(40,25);
	glVertex2i(30,20);
    glEnd();

    glBegin(GL_POLYGON);

	glVertex2i(20,45);
	glVertex2i(30,50);
	glVertex2i(50,40);
	glVertex2i(40,35);
    glEnd();

 
    glBegin(GL_POLYGON);

	glVertex2i(30,60);
	glVertex2i(40,65);
	glVertex2i(60,55);
	glVertex2i(50,50);
    glEnd();
//for green
 glColor3f(0, 1, 0);
    glBegin(GL_POLYGON);

	glVertex2i(30,10);
	glVertex2i(30,20);
	glVertex2i(35,22.5);
	glVertex2i(35,12.5);
 glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(35,12.5);
	glVertex2i(35,22.5);
	glVertex2i(40,25);
	glVertex2i(40,15);
 glEnd();
	  glBegin(GL_POLYGON);
	glVertex2i(40,15);
	glVertex2i(40,35);
	glVertex2i(50,40);
	glVertex2i(50,20);
	
    glEnd();
  glBegin(GL_POLYGON);
        glVertex2i(50,20);
        glVertex2i(50,50);
        glVertex2i(60,55);
        glVertex2i(60,25);
        
    glEnd();


    glFlush();
}

void init2D(float r, float g, float b)
{
    glClearColor(r, g, b, 0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 100, 0, 100);
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Question 1");
    init2D(0.75, 0.75, 0.75);
    glutDisplayFunc(display);
    glutMainLoop();
}

