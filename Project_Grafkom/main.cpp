#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void sapi()
{
//bagian kepala sapi
    //telinga kiri sapi
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(5.2, 4.2); //F2
    glVertex2f(5.2, 4.6); //G2
    glVertex2f(6, 4.6); //M2
    glVertex2f(6, 4.2); //G5
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(5.2, 4.4); //F5
    glVertex2f(5.2, 4.2); //F2
    glVertex2f(6.4, 4.2); //J2
    glVertex2f(6.4, 4.4); //K2
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(5.4, 4.2); //E2
    glVertex2f(5.4, 4); //D2
    glVertex2f(6.2, 4); //H2
    glVertex2f(6.2, 4.2); //I2
    glEnd();

    //garis tepi kepala sapi
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(5.8, 4); //B2
    glVertex2f(5.8, 3.2); //V1
    glVertex2f(6, 3.2); //A2
    glVertex2f(6, 4); //C2
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(5.6, 3.2); //W1
    glVertex2f(5.6, 2.8); //Z1
    glVertex2f(5.8, 2.8); //Q1
    glVertex2f(5.8, 3.2); //V1
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(5.8, 2.8); //Q1
    glVertex2f(5.8, 2.6); //R1
    glVertex2f(6, 2.6); //V
    glVertex2f(6, 2.8); //P1
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(6, 2.6); //V
    glVertex2f(6, 2.4); //D
    glVertex2f(7.2, 2.4); //E
    glVertex2f(7.2, 2.6); //B
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(7.2, 2.8); //A
    glVertex2f(7.2, 2.6); //B
    glVertex2f(7.4, 2.6); //C
    glVertex2f(7.4, 2.8); //T2
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(7.4, 2.8); //T2
    glVertex2f(7.6, 2.8); //H1
    glVertex2f(7.6, 4.2); //H5
    glVertex2f(7.4, 4.2); //R2
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(7, 4.4); //P2
    glVertex2f(7, 4.2); //S2
    glVertex2f(7.4, 4.2); //R2
    glVertex2f(7.4, 4.4); //Q2
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(6.4, 4.6); //N2
    glVertex2f(6.4, 4.4); //K2
    glVertex2f(7, 4.4); //P2
    glVertex2f(7, 4.6); //O2
    glEnd();

    //telinga kanan sapi
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(7.4, 4.6); //C1
    glVertex2f(7.4, 4.4); //Q2
    glVertex2f(8.2, 4.4); //I5
    glVertex2f(8.2, 4.6); //D1
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(8, 4.4); //G1
    glVertex2f(8.2, 4.4); //I5
    glVertex2f(8.2, 4.2); //E1
    glVertex2f(8, 4.2); //F1
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(7.4, 4.4); //Q2
    glVertex2f(7.4, 4.2); //R2
    glVertex2f(8, 4.2); //F1
    glVertex2f(8, 4.4); //G1
    glEnd();

    //mulut sapi
    glColor3ub(239,184,187);
    glBegin(GL_QUADS);
    glVertex2f(6, 3.4); //F
    glVertex2f(6, 3.2); //A2
    glVertex2f(7.2, 3.2); //H
    glVertex2f(7.2, 3.4); //G
    glEnd();

    glColor3ub(239,184,187);
    glBegin(GL_QUADS);
    glVertex2f(5.8, 3.2); //V1
    glVertex2f(5.8, 2.8); //Q1
    glVertex2f(7.4, 2.8); //T2
    glVertex2f(7.4, 3.2); //I
    glEnd();

    glColor3ub(239,184,187);
    glBegin(GL_QUADS);
    glVertex2f(6, 2.8); //P1
    glVertex2f(6, 2.6); //V
    glVertex2f(7.2, 2.6); //B
    glVertex2f(7.2, 2.8); //A
    glEnd();

    //lubang hidung sapi
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(6.2, 3.2); //N
    glVertex2f(6.4, 3.2); //O
    glVertex2f(6.4, 3); //P
    glVertex2f(6.2, 3); //Q
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(7, 3.2); //R
    glVertex2f(7, 3); //S
    glVertex2f(6.8, 3); //T
    glVertex2f(6.8, 3.2); //U
    glEnd();

    //wajah sapi
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(6.4, 4.4); //K2
    glVertex2f(6.4, 4.2); //J2
    glVertex2f(7, 4.2); //S2
    glVertex2f(7, 4.4); //P2
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(6.2, 4.2); //I2
    glVertex2f(6.2, 4); //H2
    glVertex2f(7.4, 4); //W2
    glVertex2f(7.4, 4.2); //R2
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(6, 4); //C2
    glVertex2f(6, 3.4); //F
    glVertex2f(7.4, 3.4); //J5
    glVertex2f(7.4, 4); //W2
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(7.2, 3.4); //G
    glVertex2f(7.2, 3.2); //H
    glVertex2f(7.4, 3.2); //I
    glVertex2f(7.4, 3.4); //J5
    glEnd();

    //mata sapi
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(6.2, 3.8); //J
    glVertex2f(6.4, 3.8); //K
    glVertex2f(6.4, 3.4); //M
    glVertex2f(6.2, 3.4); //L
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(6.8, 3.8); //W
    glVertex2f(7, 3.8); //Z
    glVertex2f(7, 3.4); //B1
    glVertex2f(6.8, 3.4); //A1
    glEnd();

//bagian badan sapi
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(7.6, 4.2); //H5
    glVertex2f(7.6, 4); //I1
    glVertex2f(9.2, 4); //U1
    glVertex2f(9.2, 4.2); //T1
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(8.4, 4); //J1
    glVertex2f(9.6, 4); //U2
    glVertex2f(9.6, 3.8); //V2
    glVertex2f(8.4, 3.8); //K1
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(8.6, 3.8); //L1
    glVertex2f(8.6, 3.6); //M1
    glVertex2f(9.2, 3.6); //N1
    glVertex2f(9.2, 3.8); //O1
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(9.4, 4); //K5
    glVertex2f(9.4, 1.6); //L5
    glVertex2f(9.6, 1.6); //S4
    glVertex2f(9.6, 4); //U2
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(9.6, 3.8); //V2
    glVertex2f(9.8, 3.8); //Z2
    glVertex2f(9.8, 3.6); //A3
    glVertex2f(9.6, 3.6); //B3
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(9.2, 3.8); //O1
    glVertex2f(9.4, 3.8); //S1
    glVertex2f(9.4, 2); //U4
    glVertex2f(9.2, 2); //V4
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(7.6, 4); //I1
    glVertex2f(8.4, 4); //J1
    glVertex2f(8.4, 3.8); //K1
    glVertex2f(7.6, 3.8); //O5
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(7.6, 3.8); //O5
    glVertex2f(7.6, 3.6); //P5
    glVertex2f(8.6, 3.6); //M1
    glVertex2f(8.6, 3.8); //L1
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(7.6, 3.6); //P5
    glVertex2f(9.4, 3.6); //N5
    glVertex2f(9.4, 2.8); //Q5
    glVertex2f(7.6, 2.8); //H1
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(7.4, 2.8); //T2
    glVertex2f(9.4, 2.8); //Q5
    glVertex2f(9.4, 2.6); //R5
    glVertex2f(7.4, 2.6); //C
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(7.2, 2.6); //B
    glVertex2f(7.2, 2.4); //E
    glVertex2f(7.8, 2.4); //M5
    glVertex2f(7.8, 2.6); //G4
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(7.6, 2.4); //R3
    glVertex2f(7.8, 2.4); //M5
    glVertex2f(7.8, 2); //F4
    glVertex2f(7.6, 2); //U3
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(8, 3.4); //F3
    glVertex2f(8, 3.2); //E3
    glVertex2f(8.6, 3.2); //S5
    glVertex2f(8.6, 3.4); //G3
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(7.8, 3.2); //C3
    glVertex2f(7.8, 3); //T5
    glVertex2f(8.6, 3); //J3
    glVertex2f(8.6, 3.2); //S5
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(7.8, 3); //T5
    glVertex2f(8.4, 3); //I3
    glVertex2f(8.4, 2.8); //H3
    glVertex2f(7.8, 2.8); //D3
    glEnd();

//bagian ekor sapi
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(9.8, 3.6); //A3
    glVertex2f(9.8, 2.4); //K3
    glVertex2f(10, 2.4); //L3
    glVertex2f(10, 3.6); //Q3
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(10, 3); //P3
    glVertex2f(10.2, 3); //O3
    glVertex2f(10.2, 2.6); //N3
    glVertex2f(10, 2.6); //M3
    glEnd();

//bagian kaki sapi
    //kaki 1
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(9.6, 2); //U5
    glVertex2f(9.6, 1.6); //S4
    glVertex2f(9, 1.6); //T4
    glVertex2f(9, 2); //V5
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(9, 2); //V5
    glVertex2f(9.2, 2); //V4
    glVertex2f(9.2, 2.6); //C5
    glVertex2f(9, 2.6); //W5
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(9, 2.6); //W5
    glVertex2f(9, 2.4); //Z4
    glVertex2f(8.8, 2.4); //A5
    glVertex2f(8.8, 2.6); //B5
    glEnd();

    //kaki 2
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(8.2, 2.2); //O4
    glVertex2f(8.8, 2.2); //N4
    glVertex2f(8.8, 1.6); //M4
    glVertex2f(8.6, 1.6); //Z5
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(8.4, 2); //Q4
    glVertex2f(8.6, 2); //P4
    glVertex2f(8.6, 1.6); //Z5
    glVertex2f(8.4, 1.6); //A6
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(8.2, 2.4); //I4
    glVertex2f(8.4, 2.4); //R4
    glVertex2f(8.4, 1.6); //A6
    glVertex2f(8.2, 1.6); //L4
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(8.4, 2.2); //D5
    glVertex2f(8.6, 2.2); //O4
    glVertex2f(8.6, 2); //P4
    glVertex2f(8.4, 2); //Q4
    glEnd();

    //kaki 3
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(8.2, 2.6); //H4
    glVertex2f(8.2, 2.4); //I4
    glVertex2f(7.8, 2.4); //M5
    glVertex2f(7.8, 2.6); //G4
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(7.8, 2.4); //M5
    glVertex2f(8, 2.4); //J4
    glVertex2f(8, 1.6); //K4
    glVertex2f(7.8, 1.6); //B6
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(7.6, 2); //U3
    glVertex2f(7.8, 2); //F4
    glVertex2f(7.8, 1.6); //B6
    glVertex2f(7.6, 1.6); //C6
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(7.4, 2.4); //D6
    glVertex2f(7.6, 2.4); //R3
    glVertex2f(7.6, 1.6); //C6
    glVertex2f(7.4, 1.6); //V3
    glEnd();

    //kaki 4
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(6.8, 2.4); //B4
    glVertex2f(7, 2.4); //C4
    glVertex2f(7, 2); //E4
    glVertex2f(6.8, 2); //D4
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(7.4, 2.4); //D6
    glVertex2f(7.4, 2.2); //S3
    glVertex2f(7, 2.2); //E6
    glVertex2f(7, 2.4); //C4
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(7, 2.2); //E6
    glVertex2f(7.2, 2.2); //T3
    glVertex2f(7.2, 1.6); //W3
    glVertex2f(7, 1.6); //F6
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(7, 2); //E4
    glVertex2f(7, 1.6); //F6
    glVertex2f(6.8, 1.6); //G6
    glVertex2f(6.8, 2); //D4
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(6.6, 2.4); //A4
    glVertex2f(6.8, 2.4); //B4
    glVertex2f(6.8, 1.6); //G6
    glVertex2f(6.6, 1.6); //Z3
    glEnd();

//puting susu sapi
    glColor3ub(239,184,187);
    glBegin(GL_QUADS);
    glVertex2f(8.2, 2.6); //H4
    glVertex2f(8.8, 2.6); //B5
    glVertex2f(8.8, 2.4); //A5
    glVertex2f(8.2, 2.4); //I4
    glEnd();

    glColor3ub(239,184,187);
    glBegin(GL_QUADS);
    glVertex2f(8.4, 2.4); //R4
    glVertex2f(9, 2.4); //Z4
    glVertex2f(9, 2.2); //W4
    glVertex2f(8.4, 2.2); //D5
    glEnd();

    glutSwapBuffers();
}

void displayMe()
{
    glClear(GL_COLOR_BUFFER_BIT);
    sapi();
    glFlush();
}

void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    gluOrtho2D(0,15,0,15);
    glClearColor(1.0,1.0,0.0,1.0);
    glEnable(GL_BLEND);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(800,800);
    glutCreateWindow("Execute");
    glutDisplayFunc(displayMe);
    myinit();
    glutMainLoop();
    return 0;
}
