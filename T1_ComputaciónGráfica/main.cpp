#include <GL/glut.h>
#include <math.h>
#include "logo.h"


logo Logo;
void display() {
    glLoadIdentity();
    gluOrtho2D(0,20,0,20);
    glClear(GL_COLOR_BUFFER_BIT);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);

    Logo.dibujar();
    glFlush();
}

int main (int argc, char **argv) {
glutInit (&argc, argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(800,800);
glutInitWindowPosition(0,0);
glutCreateWindow("Tarea CG");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
