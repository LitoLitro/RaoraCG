#include "fondo.h"
#include "GL/glut.h"
#include "math.h"

void fondo::dibujar1() {
    glBegin(GL_QUADS);

glColor3f(0.902f, 0.271f, 0.710f);
glVertex2f(0.0f, 0.0f);

glColor3f(0.502f, 0.396f, 0.909f);
glVertex2f(20.0f, 0.0f);

glColor3f(0.905f, 0.153f, 0.498f);
glVertex2f(20.0f, 20.0f);

glColor3f(0.902f, 0.271f, 0.710f);
glVertex2f(0.0f, 20.0f);

glEnd();
float paso = 0.8f;
    float size = 2.0f;

    glPointSize(size);

    glBegin(GL_POINTS);

    for (float x = 0; x <= 20; x += paso) {
        for (float y = 0; y <= 20; y += paso) {
            float alpha = y / 20.0f;
            glColor4f(0.757f, 0.953f, 0.733f, alpha * 0.6f);

            glVertex2f(x, y);
        }
    }

    glEnd();

GLdouble poly[][2] = {
    {0.83,0.03},
    {0.88,0.18},
    {1.04,0.35},
    {1.19,0.54},
    {1.36,0.71},
    {1.60,0.80},
    {2.08,0.97},
    {2.54,1.14},
    {3.66,1.23},
    {4.58,1.23},
    {6.65,1.28},
    {8.43,1.26},
    {9.70,1.26},
    {11.27,1.26},
    {12.23,1.26},
    {12.82,1.19},
    {13.35,0.88},
    {13.79,0.54},
    {14.12,0.13},
    {14.27,0.03}
};

int total = sizeof(poly)/sizeof(poly[0]);

double xmin = 0.83;
double xmax = 14.27;

glBegin(GL_POLYGON);

for (int i = 0; i < total; i++) {

    double x = poly[i][0];

    float t = (x - xmin) / (xmax - xmin);

    GLubyte alpha = 255 * (1.0f - t);

    glColor4ub(229, 116, 162, alpha);

    glVertex2d(poly[i][0], poly[i][1]);
}

glEnd();

}
