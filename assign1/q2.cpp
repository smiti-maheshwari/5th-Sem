#include <stdio.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    //For cuboid

    glBegin(GL_LINES);
    glColor3f(0, 0, 1);
    glVertex2i(10, 20);
    glVertex2i(20, 20);
    glColor3f(0, 1, 0);
    glVertex2i(10, 20);
    glVertex2i(10, 30);
    glColor3f(1, 0, 0);
    glVertex2i(10, 30);
    glVertex2i(20, 30);
    glColor3f(0, 0, 1);
    glVertex2i(10, 30);
    glVertex2i(20, 40);
    glColor3f(0, 1, 0);
    glVertex2i(20, 40);
    glVertex2i(30, 40);
    glColor3f(1, 0, 0);
        glVertex2i(20, 30);
        glVertex2i(30, 40);
        glVertex2i(20, 20);
    glVertex2i(20, 30);
    glVertex2i(20, 20);
    glVertex2i(30, 30);
    glVertex2i(30, 30);
    glVertex2i(30, 40);

    glEnd();
    glFlush();
}
void init2D(float r, float g, float b)
{
    glClearColor(r, g, b, 0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 50, 0, 50);
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   // glutInitWindowSize(500, 500);
    glutCreateWindow("Question 2");
	glutInitWindowSize(500, 500);
glutInitWindowPosition(100, 100);
    init2D(0.75f, 0.75f, 0.75f);
    glutDisplayFunc(display);
    glutMainLoop();
}
