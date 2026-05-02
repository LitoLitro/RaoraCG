#include <GL/glut.h>
#include <math.h>
#include "logo.h"
#include "fondo.h"
#include "esfera.h"
#include "chatt.h"
#include "fondo2.h"

logo Logo;
fondo Fondo;
esfera Esfera;
chatt Chatt;
fondo2 Fondo2;

void display() {
    glLoadIdentity();
    gluOrtho2D(0,20,0,20);
    glClear(GL_COLOR_BUFFER_BIT);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);

    Fondo.dibujar1();
    Fondo2.dibujar5();
    Chatt.dibujar3();
    Esfera.dibujar2();
    Logo.dibujar();
    glFlush();
}

int main (int argc, char **argv) {
glutInit (&argc, argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(950,950);
glutInitWindowPosition(0,0);
glutCreateWindow("Tarea CG");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
