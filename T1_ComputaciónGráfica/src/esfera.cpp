#include "esfera.h"
#include "GL/glut.h"
#include "math.h"

void esfera::dibujar2() {
    //brazo
    glColor3ub(0, 221, 254);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2d(0.68, 13.82);
glVertex2d(0.48, 16.46);
glVertex2d(0.73, 13.64);
glVertex2d(0.53, 16.64);
glVertex2d(0.86, 13.55);
glVertex2d(0.57, 16.84);
glVertex2d(1.00, 13.48);
glVertex2d(0.65, 17.02);
glVertex2d(1.20, 13.52);
glVertex2d(0.71, 17.22);
glVertex2d(1.53, 13.77);
glVertex2d(0.76, 17.34);
glVertex2d(1.73, 14.40);
glVertex2d(0.80, 17.49);
glVertex2d(1.78, 14.82);
glVertex2d(0.84, 17.58);
glVertex2d(1.70, 15.79);
glVertex2d(0.88, 17.74);
glVertex2d(1.82, 15.92);
glVertex2d(0.97, 17.96);
glVertex2d(1.92, 16.15);
glColor3ub(101, 255, 202);
glVertex2d(1.05, 18.15);
glVertex2d(2.03, 16.36);
glVertex2d(1.84, 20.00);
glVertex2d(3.59, 19.10);
glVertex2d(7.81, 20.00);
glEnd();
glColor3ub(158, 6, 181);
glBegin(GL_POLYGON);
glVertex2d(0.61, 16.48);
glVertex2d(0.83, 16.39);
glVertex2d(1.48, 16.10);
glVertex2d(1.65, 16.01);
glVertex2d(1.56, 14.38);
glVertex2d(1.49, 13.85);
glVertex2d(1.37, 13.72);
glVertex2d(1.18, 13.66);
glVertex2d(0.95, 13.68);
glVertex2d(0.77, 13.83);
glVertex2d(0.71, 14.30);
glEnd();
glColor3ub(232, 30, 217);
glBegin(GL_TRIANGLE_STRIP);
glVertex2d(0.61, 16.48);
glVertex2d(1.65, 16.01);
glVertex2d(0.72, 16.72);
glVertex2d(1.84, 16.37);
glVertex2d(0.86, 17.23);
glVertex2d(2.07, 16.74);
glVertex2d(1.06, 17.80);
glVertex2d(2.33, 17.19);
glVertex2d(1.25, 18.26);
glVertex2d(2.49, 17.48);
glVertex2d(1.41, 18.67);
glVertex2d(2.71, 17.85);
glVertex2d(1.61, 19.06);
glVertex2d(2.83, 18.06);
glVertex2d(1.82, 19.52);
glVertex2d(3.01, 18.32);
glVertex2d(1.94, 19.75);
glVertex2d(3.15, 18.57);
glVertex2d(2.05, 20.00);
glVertex2d(3.51, 19.20);
glVertex2d(4.91, 19.99);
glVertex2d(5.42, 19.58);
glVertex2d(7.36, 20.00);
glEnd();
glColor3ub(254, 157, 254);
glBegin(GL_TRIANGLE_STRIP);
glVertex2d(0.81, 16.46);
glVertex2d(0.87, 16.60);
glVertex2d(0.85, 16.33);
glVertex2d(0.92, 16.74);
glVertex2d(0.94, 16.22);
glVertex2d(1.01, 16.91);
glVertex2d(1.04, 16.14);
glVertex2d(1.05, 17.10);
glVertex2d(1.19, 16.08);
glVertex2d(1.13, 17.26);
glVertex2d(1.33, 16.08);
glVertex2d(1.19, 17.43);
glVertex2d(1.45, 16.10);
glVertex2d(1.28, 17.65);
glVertex2d(1.52, 16.11);
glVertex2d(1.39, 18.01);
glVertex2d(1.68, 16.40);
glVertex2d(1.50, 18.28);
glVertex2d(1.85, 16.73);
glVertex2d(1.67, 18.63);
glVertex2d(2.09, 17.13);
glVertex2d(1.78, 18.95);
glVertex2d(2.31, 17.48);
glVertex2d(1.88, 19.17);
glVertex2d(2.45, 17.76);
glVertex2d(1.97, 19.38);
glVertex2d(2.62, 18.03);
glVertex2d(2.08, 19.61);
glVertex2d(2.80, 18.35);
glVertex2d(2.28, 19.99);
glVertex2d(3.11, 18.78);
glVertex2d(3.24, 20.00);
glVertex2d(3.45, 19.30);
glVertex2d(6.43, 20.00);
glEnd();
glColor3ub(202, 229, 255);
glBegin(GL_TRIANGLE_STRIP);
glVertex2d(0.85, 16.33);
glVertex2d(0.86, 14.57);
glVertex2d(0.95, 16.21);
glVertex2d(0.90, 14.39);
glVertex2d(1.04, 16.15);
glVertex2d(0.91, 14.26);
glVertex2d(1.14, 16.11);
glVertex2d(0.92, 14.11);
glVertex2d(1.24, 16.10);
glVertex2d(0.92, 13.99);
glVertex2d(1.35, 16.11);
glVertex2d(0.99, 13.90);
glVertex2d(1.44, 16.11);
glVertex2d(1.05, 13.81);
glVertex2d(1.51, 16.14);
glVertex2d(1.14, 13.79);
glVertex2d(1.43, 15.05);
glVertex2d(1.31, 14.01);
glVertex2d(1.40, 14.60);
glVertex2d(1.35, 14.26);
glVertex2d(1.38, 14.45);
glEnd();
glColor3ub(158, 195, 239);
glBegin(GL_TRIANGLE_STRIP);
glVertex2d(0.87, 14.56);
glVertex2d(0.94, 13.94);
glVertex2d(0.98, 14.52);
glVertex2d(1.02, 13.85);
glVertex2d(1.09, 14.53);
glVertex2d(1.14, 13.79);
glVertex2d(1.18, 14.60);
glVertex2d(1.31, 13.99);
glVertex2d(1.25, 14.69);
glVertex2d(1.36, 14.25);
glVertex2d(1.33, 14.80);
glVertex2d(1.38, 14.52);
glVertex2d(1.41, 14.96);
glEnd();
glColor3ub(116, 255, 201);
glBegin(GL_TRIANGLE_FAN);
glVertex2d(20.00, 19.99);
glVertex2d(17.52, 19.98);
glVertex2d(17.59, 19.87);
glVertex2d(17.70, 19.75);
glVertex2d(17.81, 19.61);
glVertex2d(17.92, 19.48);
glVertex2d(17.99, 19.40);
glVertex2d(18.09, 19.28);
glVertex2d(18.20, 19.14);
glVertex2d(18.32, 19.03);
glVertex2d(18.39, 18.94);
glVertex2d(18.52, 18.83);
glVertex2d(18.61, 18.72);
glVertex2d(18.74, 18.63);
glVertex2d(18.89, 18.46);
glVertex2d(19.01, 18.32);
glVertex2d(19.13, 18.25);
glVertex2d(19.24, 18.15);
glVertex2d(19.37, 18.02);
glVertex2d(19.51, 17.92);
glVertex2d(19.62, 17.86);
glVertex2d(19.75, 17.77);
glVertex2d(19.88, 17.68);
glVertex2d(19.99, 17.63);
glEnd();
glColor3ub(255, 103, 225);
glBegin(GL_TRIANGLE_FAN);
glVertex2d(20.00, 20.00);
glVertex2d(17.64, 19.98);
glVertex2d(17.70, 19.88);
glVertex2d(17.79, 19.79);
glVertex2d(17.83, 19.72);
glVertex2d(17.90, 19.63);
glVertex2d(17.97, 19.55);
glVertex2d(18.05, 19.45);
glVertex2d(18.15, 19.39);
glVertex2d(18.19, 19.34);
glVertex2d(18.23, 19.30);
glVertex2d(18.27, 19.26);
glVertex2d(18.32, 19.21);
glVertex2d(18.38, 19.12);
glVertex2d(18.46, 19.05);
glVertex2d(18.53, 18.99);
glVertex2d(18.59, 18.92);
glVertex2d(18.67, 18.85);
glVertex2d(18.75, 18.79);
glVertex2d(18.85, 18.70);
glVertex2d(18.96, 18.60);
glVertex2d(19.05, 18.52);
glVertex2d(19.15, 18.44);
glVertex2d(19.24, 18.37);
glVertex2d(19.38, 18.28);
glVertex2d(19.49, 18.20);
glVertex2d(19.59, 18.13);
glVertex2d(19.68, 18.06);
glVertex2d(19.80, 17.97);
glVertex2d(19.88, 17.90);
glVertex2d(19.97, 17.84);
glEnd();
glColor3ub(245, 209, 253);
glBegin(GL_TRIANGLE_FAN);
glVertex2d(20.00, 20.00);
glVertex2d(17.98, 19.99);
glVertex2d(18.03, 19.91);
glVertex2d(18.09, 19.85);
glVertex2d(18.14, 19.76);
glVertex2d(18.23, 19.66);
glVertex2d(18.31, 19.58);
glVertex2d(18.41, 19.52);
glVertex2d(18.48, 19.41);
glVertex2d(18.56, 19.30);
glVertex2d(18.67, 19.21);
glVertex2d(18.76, 19.12);
glVertex2d(18.85, 19.06);
glVertex2d(18.95, 18.98);
glVertex2d(19.05, 18.89);
glVertex2d(19.16, 18.79);
glVertex2d(19.25, 18.72);
glVertex2d(19.37, 18.63);
glVertex2d(19.47, 18.52);
glVertex2d(19.55, 18.46);
glVertex2d(19.67, 18.37);
glVertex2d(19.76, 18.31);
glVertex2d(19.86, 18.26);
glVertex2d(19.93, 18.17);
glVertex2d(19.99, 18.12);
glEnd();
glColor3ub(255, 255, 255);
glBegin(GL_TRIANGLE_FAN);
glVertex2d(20.00, 20.00);
glVertex2d(18.30, 20.00);
glVertex2d(18.37, 19.90);
glVertex2d(18.40, 19.85);
glVertex2d(18.47, 19.77);
glVertex2d(18.54, 19.71);
glVertex2d(18.59, 19.63);
glVertex2d(18.66, 19.58);
glVertex2d(18.69, 19.51);
glVertex2d(18.79, 19.43);
glVertex2d(18.85, 19.38);
glVertex2d(18.91, 19.32);
glVertex2d(19.00, 19.25);
glVertex2d(19.05, 19.22);
glVertex2d(19.11, 19.14);
glVertex2d(19.17, 19.10);
glVertex2d(19.25, 19.04);
glVertex2d(19.32, 18.97);
glVertex2d(19.35, 18.95);
glVertex2d(19.43, 18.91);
glVertex2d(19.51, 18.85);
glVertex2d(19.58, 18.81);
glVertex2d(19.66, 18.77);
glVertex2d(19.71, 18.73);
glVertex2d(19.79, 18.68);
glVertex2d(19.88, 18.63);
glVertex2d(19.95, 18.59);
glVertex2d(20.00, 18.56);
glEnd();
glColor3ub(254, 157, 254);
glBegin(GL_TRIANGLE_FAN);
glVertex2d(20.00, 20.00);
glVertex2d(19.09, 20.00);
glVertex2d(19.14, 19.91);
glVertex2d(19.22, 19.81);
glVertex2d(19.31, 19.72);
glVertex2d(19.41, 19.62);
glVertex2d(19.48, 19.55);
glVertex2d(19.56, 19.44);
glVertex2d(19.64, 19.36);
glVertex2d(19.71, 19.30);
glVertex2d(19.77, 19.26);
glVertex2d(19.83, 19.21);
glVertex2d(19.92, 19.13);
glVertex2d(19.99, 19.05);

glEnd();
    //esfera con trasparencia
    float cx = 10.005f;
    float cy = 9.775f;
    float r  = 9.5;

    int segmentos = 200;

    glBegin(GL_TRIANGLE_FAN);

    glColor4ub(128, 217, 255, 60);
    glVertex2f(cx, cy);

    for (int i = 0; i <= segmentos; i++) {
        float ang = 2 * M_PI * i / segmentos;

        float x = cx + cos(ang) * r;
        float y = cy + sin(ang) * r;

        float t = (y - (cy - r)) / (2 * r);

        int alpha = 13 + t * 38;

        glColor4ub(128, 217, 255, alpha);
        glVertex2f(x, y);
    }

    glEnd();

    float grosorGlow = 0.3f;

    glBegin(GL_TRIANGLE_STRIP);

    for (int i = 0; i <= segmentos; i++) {
        float ang = 2 * M_PI * i / segmentos;

        float cosA = cos(ang);
        float sinA = sin(ang);

        glColor4ub(230, 230, 230, 100);
        glVertex2f(cx + cosA * r, cy + sinA * r);

        glColor4ub(230, 230, 230, 0);
        glVertex2f(cx + cosA * (r + grosorGlow), cy + sinA * (r + grosorGlow));
    }

    glEnd();

    glLineWidth(4);
    glColor4ub(255, 0, 151, 255);

    glBegin(GL_LINE_LOOP);

    for (int i = 0; i < segmentos; i++) {
        float ang = 2 * M_PI * i / segmentos;

        float x = cx + cos(ang) * r;
        float y = cy + sin(ang) * r;

        glVertex2f(x, y);
    }

    glEnd();
}
