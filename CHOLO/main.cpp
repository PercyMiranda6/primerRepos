#include <GL/glut.h>

//-----------------------------------
void inicializar() {
    glClearColor(0.8, 0.8, 0.8, 0.0);
}

//-----------------------------------
// Dibujar bordes negros
void borde(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4){
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
        glVertex2f(x1,y1);
        glVertex2f(x2,y2);
        glVertex2f(x3,y3);
        glVertex2f(x4,y4);
    glEnd();
}

//-----------------------------------
void graficar() {
    glClear(GL_COLOR_BUFFER_BIT);

    // ================= ESCENARIO =================

    // LATERAL
    glColor3ub(0,200,0);
    glBegin(GL_QUADS);
        glVertex2f(-1,1);
        glVertex2f(-0.5,1);
        glVertex2f(-0.5,-0.3);
        glVertex2f(-1,-1);
    glEnd();
    borde(-1,1,-0.5,1,-0.5,-0.3,-1,-1);

    // FRONTAL
    glColor3ub(30,170,20);
    glBegin(GL_QUADS);
        glVertex2f(-0.5,-0.3);
        glVertex2f(-0.5,1);
        glVertex2f(1,1);
        glVertex2f(1,-0.3);
    glEnd();
    borde(-0.5,-0.3,-0.5,1,1,1,1,-0.3);

    // PISO
    glColor3ub(200,200,200);
    glBegin(GL_QUADS);
        glVertex2f(-1,-1);
        glVertex2f(-0.5,-0.3);
        glVertex2f(1,-0.3);
        glVertex2f(1,-1);
    glEnd();
    borde(-1,-1,-0.5,-0.3,1,-0.3,1,-1);



    // ================= PATAS CON VOLUMEN =================
    glColor3ub(120,60,0);

    // ---- PATA 1 ----
    // frontal
    glBegin(GL_QUADS);
        glVertex2f(-0.18,-0.25);
        glVertex2f(-0.12,-0.25);
        glVertex2f(-0.12,-0.7);
        glVertex2f(-0.18,-0.7);
    glEnd();
    borde(-0.18,-0.25,-0.12,-0.25,-0.12,-0.7,-0.18,-0.7);

    // lateral
    glColor3ub(90,45,0);
    glBegin(GL_QUADS);
        glVertex2f(-0.12,-0.25);
        glVertex2f(-0.08,-0.20);
        glVertex2f(-0.08,-0.65);
        glVertex2f(-0.12,-0.7);
    glEnd();
    borde(-0.12,-0.25,-0.08,-0.20,-0.08,-0.65,-0.12,-0.7);

    // ---- PATA 2 ----
    glColor3ub(120,60,0);
    glBegin(GL_QUADS);
        glVertex2f(0.34,-0.25);
        glVertex2f(0.40,-0.25);
        glVertex2f(0.40,-0.7);
        glVertex2f(0.34,-0.7);
    glEnd();
    borde(0.34,-0.25,0.40,-0.25,0.40,-0.7,0.34,-0.7);

    glColor3ub(90,45,0);
    glBegin(GL_QUADS);
        glVertex2f(0.40,-0.25);
        glVertex2f(0.45,-0.20);
        glVertex2f(0.45,-0.65);
        glVertex2f(0.40,-0.7);
    glEnd();
    borde(0.40,-0.25,0.45,-0.20,0.45,-0.65,0.40,-0.7);

    // ---- PATA TRASERA IZQ ----
    glColor3ub(120,60,0);
    glBegin(GL_QUADS);
        glVertex2f(0.05,0.0);
        glVertex2f(0.10,0.0);
        glVertex2f(0.10,-0.45);
        glVertex2f(0.05,-0.45);
    glEnd();
    borde(0.05,0.0,0.10,0.0,0.10,-0.45,0.05,-0.45);

    glColor3ub(90,45,0);
    glBegin(GL_QUADS);
        glVertex2f(0.10,0.0);
        glVertex2f(0.14,0.04);
        glVertex2f(0.14,-0.40);
        glVertex2f(0.10,-0.45);
    glEnd();
    borde(0.10,0.0,0.14,0.04,0.14,-0.40,0.10,-0.45);

    // ---- PATA TRASERA DER ----
    glColor3ub(120,60,0);
    glBegin(GL_QUADS);
        glVertex2f(0.55,0.0);
        glVertex2f(0.60,0.0);
        glVertex2f(0.60,-0.45);
        glVertex2f(0.55,-0.45);
    glEnd();
    borde(0.55,0.0,0.60,0.0,0.60,-0.45,0.55,-0.45);

    glColor3ub(90,45,0);
    glBegin(GL_QUADS);
        glVertex2f(0.60,0.0);
        glVertex2f(0.65,0.04);
        glVertex2f(0.65,-0.40);
        glVertex2f(0.60,-0.45);
    glEnd();
    borde(0.60,0.0,0.65,0.04,0.65,-0.40,0.60,-0.45);
        // ================= MESA =================

    // TABLERO
    glColor3ub(150,75,0);
    glBegin(GL_QUADS);
        glVertex2f(-0.2,-0.25);
        glVertex2f(0.4,-0.25);
        glVertex2f(0.6,0.0);
        glVertex2f(0.05,0.0);
    glEnd();
    borde(-0.2,-0.25,0.4,-0.25,0.6,0.0,0.05,0.0);

    // ================= CUBO =================

    // frontal
    glColor3ub(0,0,255);
    glBegin(GL_QUADS);
        glVertex2f(0.2,-0.1);
        glVertex2f(0.32,-0.1);
        glVertex2f(0.32,0.08);
        glVertex2f(0.2,0.08);
    glEnd();
    borde(0.2,-0.1,0.32,-0.1,0.32,0.08,0.2,0.08);

    // superior
    glColor3ub(255,0,0);
    glBegin(GL_QUADS);
        glVertex2f(0.2,0.08);
        glVertex2f(0.32,0.08);
        glVertex2f(0.38,0.14);
        glVertex2f(0.26,0.14);
    glEnd();
    borde(0.2,0.08,0.32,0.08,0.38,0.14,0.26,0.14);

    // lateral
    glColor3ub(0,0,150);
    glBegin(GL_QUADS);
        glVertex2f(0.32,-0.1);
        glVertex2f(0.38,-0.04);
        glVertex2f(0.38,0.14);
        glVertex2f(0.32,0.08);
    glEnd();
    borde(0.32,-0.1,0.38,-0.04,0.38,0.14,0.32,0.08);

    glFlush();
}

//-----------------------------------
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,400);
    glutCreateWindow("Escena 2D mejorada");

    inicializar();
    glutDisplayFunc(graficar);

    glutMainLoop();
    return 0;
}
