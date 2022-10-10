/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#include <GL/glut.h>

void titik ();
main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("tugas 2");
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0.0,0.0,0.0,0.0,0.0,0.0);
    glutDisplayFunc(titik);
    glutMainLoop();
}
void titik()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(25.25);
    glBegin(GL_LINES);

    glColor4f(1.0, 0.0, 0.0, 0.0);//red
    glVertex2f(0.0,0.0);
    glVertex2f(25,25);

    glEnd();
    glFlush();
}
