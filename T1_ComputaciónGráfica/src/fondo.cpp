#include "fondo.h"
#include "GL/glut.h"
#include "math.h"

void fondo::dibujar1() {
    glBegin(GL_QUADS);

// 🔵 esquina inferior izquierda
glColor3f(0.902f, 0.271f, 0.710f);
glVertex2f(0.0f, 0.0f);

// 🔵 esquina inferior derecha
glColor3f(0.502f, 0.396f, 0.909f);
glVertex2f(20.0f, 0.0f);

// 🔵 esquina superior derecha
glColor3f(0.905f, 0.153f, 0.498f);
glVertex2f(20.0f, 20.0f);

// 🔵 esquina superior izquierda
glColor3f(0.902f, 0.271f, 0.710f);
glVertex2f(0.0f, 20.0f);

glEnd();
float paso = 0.8f;   // distancia entre puntos (ajusta densidad)
    float size = 2.0f;   // tamaño del punto

    glPointSize(size);

    glBegin(GL_POINTS);

    for (float x = 0; x <= 20; x += paso) {
        for (float y = 0; y <= 20; y += paso) {

            // 🔥 alpha depende de la altura
            float alpha = y / 20.0f;
            // arriba (y=20) → alpha=1
            // abajo (y=0)  → alpha=0

            glColor4f(0.757f, 0.953f, 0.733f, alpha * 0.6f);

            glVertex2f(x, y);
        }
    }

    glEnd();
}
