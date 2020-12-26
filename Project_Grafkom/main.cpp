#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <string.h>
#include <sstream>

bool lompat = true;
bool movee = true;
bool jatuh = true;
bool skor = true;
bool start = false;

float jump;
float movement;
float bot;
float bot2;
float n;
float posisiX[2] = {5.2, 10.2};
float posisiY[2] = {1.6, 4.6};

float x[4] = {0, 3.5, 0, 3.5};
float y[4] = {0, 3.5, 0, 3.5};

int number;

using namespace std;

//membuat collider pada sapi
void colliderSapi()
{
    glPushMatrix();
    glTranslated(40,10,0);
    glScalef(3,5,0);
    glBegin(GL_POLYGON);
    glColor4f(1,1,1,0);
    glVertex2f(posisiX[0], posisiY[0]); //H6
    glVertex2f(posisiX[1], posisiY[0]); //I6
    glVertex2f(posisiX[1], posisiY[1]); //J6
    glVertex2f(posisiX[0], posisiY[1]); //G2
    glEnd();
    glPopMatrix();
}

//membuat collider pada box yang bergerak horizontal
void colliderBox1()
{
    glPushMatrix();
    glTranslated(-10,0,0);
    glScalef(3,5,0);
    glBegin(GL_POLYGON);
    glColor4ub(143,98,36,0);
    glVertex2f(x[0], y[0]);
    glVertex2f(x[1], y[0]);
    glVertex2f(x[1], y[1]);
    glVertex2f(x[0], y[1]);
    glEnd();
    glPopMatrix();
}

//membuat collider pada box2 yang bergerak vertikal
void colliderBox2()
{
    glPushMatrix();
    glScalef(3,5,0);
    glBegin(GL_POLYGON);
    glColor4ub(143,98,36,0);
    glVertex2f(x[2], y[2]);
    glVertex2f(x[3], y[2]);
    glVertex2f(x[3], y[3]);
    glVertex2f(x[2], y[3]);
    glEnd();
    glPopMatrix();
}

//membuat sepatu roket pada sapi
void animasiApi()
{
    glPushMatrix();

//membuat sepatu merah sapi
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(6.6, 1.9);
    glVertex2f(7.2, 1.9);
    glVertex2f(7.2, 1.6);
    glVertex2f(6.6, 1.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(7.4, 1.9);
    glVertex2f(8, 1.9);
    glVertex2f(8, 1.6);
    glVertex2f(7.4, 1.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(8.2, 1.9);
    glVertex2f(8.8, 1.9);
    glVertex2f(8.8, 1.6);
    glVertex2f(8.2, 1.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(9, 1.9);
    glVertex2f(9.6, 1.9);
    glVertex2f(9.6, 1.6);
    glVertex2f(9, 1.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(24, 169, 201);
    glVertex2f(6.8, 1.6);
    glVertex2f(6.65064, 1.37571);
    glVertex2f(6.59946, 1.1499);
    glVertex2f(6.85926, 0.99057);
    glVertex2f(7.09728, 1.1106);
    glVertex2f(7.06453, 1.37261);
    glVertex2f(7, 1.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(24, 169, 201);
    glVertex2f(7.6, 1.6);
    glVertex2f(7.45064, 1.37571);
    glVertex2f(7.39946, 1.1499);
    glVertex2f(7.65926, 0.99057);
    glVertex2f(7.89728, 1.1106);
    glVertex2f(7.86453, 1.37261);
    glVertex2f(7.8, 1.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(24, 169, 201);
    glVertex2f(8.4, 1.6);
    glVertex2f(8.25064, 1.37571);
    glVertex2f(8.19946, 1.1499);
    glVertex2f(8.45926, 0.99057);
    glVertex2f(8.69728, 1.1106);
    glVertex2f(8.66453, 1.37261);
    glVertex2f(8.6, 1.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(24, 169, 201);
    glVertex2f(9.2, 1.6);
    glVertex2f(9.05064, 1.37571);
    glVertex2f(8.99946, 1.1499);
    glVertex2f(9.25926, 0.99057);
    glVertex2f(9.49728, 1.1106);
    glVertex2f(9.46453, 1.37261);
    glVertex2f(9.4, 1.6);
    glEnd();

    glPopMatrix();
}

//membuat karakter sapi
void sapi()
{
    colliderSapi();

    glPushMatrix();
    glTranslated(40,10,0);
    glScalef(3,5,0);
    glTranslated(movement,jump,0);
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

    if (GetAsyncKeyState(VK_UP)){
        animasiApi();
    }

    glPopMatrix();
}

//membuat rintangan berupa box yang bergerak secara horizontal
void box()
{
    colliderBox1();

    glPushMatrix();
    glTranslated(-10,0,0);
    glScalef(3,5,0);
    glTranslated(bot,0,0);

    glBegin(GL_QUADS);
    glColor3ub(143,98,36);
    glVertex2f(0, 3.5);
    glVertex2f(0.5, 3.5);
    glVertex2f(0.5, 0);
    glVertex2f(0, 0);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.5, 3.5);
    glVertex2f(3, 3.5);
    glVertex2f(3, 3);
    glVertex2f(0.5, 3);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(3, 3.5);
    glVertex2f(3.5, 3.5);
    glVertex2f(3.5, 0);
    glVertex2f(3, 0);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.5, 0.5);
    glVertex2f(3, 0.5);
    glVertex2f(3, 0);
    glVertex2f(0.5, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(143,98,36);
    glVertex2f(0.5, 0.5);
    glVertex2f(1, 0.5);
    glVertex2f(3, 2.5);
    glVertex2f(3, 3);
    glVertex2f(2.5, 3);
    glVertex2f(0.5, 1);
    glEnd();

    glPopMatrix();
}

//membuat rintangan berupa box yang bergerak secara vertikal
void box2()
{
    colliderBox2();

    glPushMatrix();
    glScalef(3,5,0);
    glTranslated(0,bot2,0);

    glBegin(GL_QUADS);
    glColor3ub(143,98,36);
    glVertex2f(0, 3.5);
    glVertex2f(0.5, 3.5);
    glVertex2f(0.5, 0);
    glVertex2f(0, 0);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.5, 3.5);
    glVertex2f(3, 3.5);
    glVertex2f(3, 3);
    glVertex2f(0.5, 3);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(3, 3.5);
    glVertex2f(3.5, 3.5);
    glVertex2f(3.5, 0);
    glVertex2f(3, 0);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.5, 0.5);
    glVertex2f(3, 0.5);
    glVertex2f(3, 0);
    glVertex2f(0.5, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(143,98,36);
    glVertex2f(0.5, 0.5);
    glVertex2f(1, 0.5);
    glVertex2f(3, 2.5);
    glVertex2f(3, 3);
    glVertex2f(2.5, 3);
    glVertex2f(0.5, 1);
    glEnd();

    glPopMatrix();
}

//membuat jalan yang dilalui sapi
void jalan()
{
    glPushMatrix();

    //Bagian tanah berwarna coklat
    glColor3ub(169,127,91);
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(0,10);
    glVertex2i(124,10);
    glVertex2i(124,0);
    glEnd();

    //Bagian rumput yang tampak samping
    glColor3ub(61,204,84);
    glBegin(GL_QUADS);
    glVertex2i(0,10);
    glVertex2i(0,13);
    glVertex2i(124,13);
    glVertex2i(124,10);
    glEnd();

    //Bagian jalan untuk sapi
    glColor3ub(167,235,86);
    glBegin(GL_QUADS);
    glVertex2i(0,13);
    glVertex2i(0,29);
    glVertex2i(124,29);
    glVertex2i(124,13);
    glEnd();

    //Bagian jalan (rumput) untuk sapi
    glColor3ub(167,235,86);
    glBegin(GL_QUADS);
    glVertex2i(0,13);
    glVertex2i(0,29);
    glVertex2i(124,29);
    glVertex2i(124,13);
    glEnd();

    glPopMatrix();
}

//membuat rumah
void rumah()
{
    jalan();

    glPushMatrix();
    glTranslated(n,0,0);

    //Bagian lantai rumah
    glColor3ub(160,135,104);
    glBegin(GL_QUADS);
    glVertex2i(5.54,29);
    glVertex2i(5.54,31.5);
    glVertex2i(42,31.5);
    glVertex2i(42,29);
    glEnd();

    //Bagian bagan rumah
    glColor3ub(180,152,113);
    glBegin(GL_QUADS);
    glVertex2i(6.7,31.5);
    glVertex2i(6.7,60);
    glVertex2i(41.7,60);
    glVertex2i(41.7,31.5);
    glEnd();

    //Bagian garis kecil diantara bagan rumah dan atap
    glColor3ub(160,135,104);
    glBegin(GL_QUADS);
    glVertex2i(6.7,60);
    glVertex2i(6.7,62);
    glVertex2i(41.7,62);
    glVertex2i(41.7,60);
    glEnd();

    //Bagian pintu rumah di bagan
    glColor3ub(86,74,58);
    glBegin(GL_QUADS);
    glVertex2i(20,31.5);
    glVertex2i(20,50);
    glVertex2i(27,50);
    glVertex2i(27,31.5);
    glEnd();

    //garis pintu kiri
    glColor3ub(239,229,217);
    glBegin(GL_QUADS);
    glVertex2i(18,31.5);
    glVertex2i(18,60);
    glVertex2i(19,60);
    glVertex2i(19,31.5);
    glEnd();

    //garis pintu kanan
    glColor3ub(239,229,217);
    glBegin(GL_QUADS);
    glVertex2i(28,31.5);
    glVertex2i(28,60);
    glVertex2i(29,60);
    glVertex2i(29,31.5);
    glEnd();

    //garis pintu atas
    glColor3ub(239,229,217);
    glBegin(GL_QUADS);
    glVertex2i(19,60);
    glVertex2i(19,62);
    glVertex2i(28,62);
    glVertex2i(28,60);
    glEnd();

    //jendela kiri
    glColor3ub(86,74,58);
    glBegin(GL_QUADS);
    glVertex2i(9,40);
    glVertex2i(9,50);
    glVertex2i(15,50);
    glVertex2i(15,40);
    glEnd();

     //jendela kanan
    glColor3ub(86,74,58);
    glBegin(GL_QUADS);
    glVertex2i(32,40);
    glVertex2i(32,50);
    glVertex2i(38,50);
    glVertex2i(38,40);
    glEnd();

    //cerobong asap
    glColor3ub(160,135,104);
    glBegin(GL_QUADS);
    glVertex2i(8,62);
    glVertex2i(8,81);
    glVertex2i(12,81);
    glVertex2i(12,62);
    glEnd();

    //atap 1
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(5.54,62);
    glVertex2i(5.54,64);
    glVertex2i(42,64);
    glVertex2i(42,62);
    glEnd();

    //atap 2
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(6,64);
    glVertex2i(6,66);
    glVertex2i(41,66);
    glVertex2i(41,64);
    glEnd();

    //atap 3
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(7,66);
    glVertex2i(7,68);
    glVertex2i(40,68);
    glVertex2i(40,66);
    glEnd();

    //atap 4
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(8,68);
    glVertex2i(8,70);
    glVertex2i(39,70);
    glVertex2i(39,68);
    glEnd();

    //atap 5
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(9,70);
    glVertex2i(9,72);
    glVertex2i(38,72);
    glVertex2i(38,70);
    glEnd();

    //atap 6
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(10,72);
    glVertex2i(10,74);
    glVertex2i(37,74);
    glVertex2i(37,72);
    glEnd();

    //atap 6
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(11,74);
    glVertex2i(11,76);
    glVertex2i(36,76);
    glVertex2i(36,74);
    glEnd();

    //atap 7
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(12,76);
    glVertex2i(12,78);
    glVertex2i(35,78);
    glVertex2i(35,76);
    glEnd();

    //atap 8
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(13,78);
    glVertex2i(13,80);
    glVertex2i(34,80);
    glVertex2i(34,78);
    glEnd();

    //atap 9
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(14,80);
    glVertex2i(14,82);
    glVertex2i(33,82);
    glVertex2i(33,80);
    glEnd();

    //atap 10
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(15,82);
    glVertex2i(15,84);
    glVertex2i(32,84);
    glVertex2i(32,82);
    glEnd();

    glPopMatrix();
}

//jika kalah
void kalah()
{
    glPushMatrix();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(30,80);
    glVertex2f(30,40);
    glVertex2f(40,40);
    glVertex2f(40,80);

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(40,70);
    glVertex2f(60,80);
    glVertex2f(60,70);
    glVertex2f(40,60);

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(40,60);
    glVertex2f(60,50);
    glVertex2f(60,40);
    glVertex2f(40,50);

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(70,80);
    glVertex2f(110,80);
    glVertex2f(110,70);
    glVertex2f(70,70);

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(40,60);
    glVertex2f(60,50);
    glVertex2f(60,40);
    glVertex2f(40,50);

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(100,70);
    glVertex2f(110,70);
    glVertex2f(110,40);
    glVertex2f(100,40);

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(100,50);
    glVertex2f(100,40);
    glVertex2f(70,40);
    glVertex2f(70,50);

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(70,50);
    glVertex2f(80,50);
    glVertex2f(80,70);
    glVertex2f(70,70);

    glEnd();
    glPopMatrix();
}

//looping pada box yang bergerak secara horizontal
void displaybox()
{
    float a = 0;
    float b = 70;
    float c = 17;
    for (int i = 0; i<=1000; i++){
        glPushMatrix();
        glTranslated(a,c,0);
        colliderBox1();
        box();
        glPopMatrix();
        a -= b;
        if (i%2 == 0){
            c = 35;
        }
        else if (i%2 != 0){
            c = 17;
        }
    }
}

//looping pada box2 yang bergerak secara vertikal
void displaybox2()
{
    float a = 90;
    float b = 124;
    float c = 200;
    for (int j=0; j<=1000; j++){
        glPushMatrix();
        glTranslated(a,b,0);
        box2();
        glPopMatrix();
        b += c;
        if (j%6 == 0){
            a = 25;
        }
        else if (j%6 == 1){
            a = 70;
        }
        else if (j%6 == 2){
            a = 90;
        }
        else if (j%6 == 3){
            a = 40;
        }
        else if (j%6 == 4){
            a = 35;
        }
        else if (j%6 == 5){
            a = 55;
        }
    }
}

//membuat looping pada rumah
void displayRumah()
{
    float a = 0;
    for (int k = 0; k<=1000; k++){
        glPushMatrix();
        glTranslated(a,0,0);
        rumah();
        glPopMatrix();
        a -= 75;
    }
}

//menambahkan fungsi keyboard
void start_game(unsigned char key, int x, int y)
{
    if (key == 'a' || key == 'A'){
        start = true;
    }
}

//movement pada sapi
void characterController(int data){
    //ketika menekan left arrow
    if (start == true){
        if(GetAsyncKeyState(VK_LEFT)){
            if (posisiX[0] >= -14){
                posisiX[0] -= 1.0f;
                posisiX[1] -= 1.0f;
                movement -= 1.0f;
            }
        //ketika menekan right arrow
        } else if(GetAsyncKeyState(VK_RIGHT)){
            if (posisiX[1] <= 29){
                posisiX[0] += 1.0f;
                posisiX[1] += 1.0f;
                movement += 1.0f;
            }
        }
        //ketika menekan up arrow
        if(GetAsyncKeyState(VK_UP)){
            if (posisiY[1] <= 8){
                posisiY[0] += 1.0f;
                posisiY[1] += 1.0f;
                jump += 1.0f;
            }
        //ketika sapi melompat adalah true
        } else if (lompat == true){
            if (posisiY[0] >= 2){
                posisiY[0] -= 1.0f;
                posisiY[1] -= 1.0f;
                jump -= 1.0f;
            }
        }
    }
    glutPostRedisplay();
    glutTimerFunc(20,characterController,0);
}

//membuat background bergerak
void houseMove(int data)
{
    if (movee == true){
        n += 0.5f;
    }
    glutPostRedisplay();
    glutTimerFunc(25,houseMove,0);
}

//movement speed box horizontal
void boxMoveHorizontal(int data)
{
    if (start == true){
        if (movee == true){
            x[0] += 0.3f;
            x[1] += 0.3f;
            bot += 0.3f;
        }
        if (posisiX[0] <= x[1]-17 && posisiY[0] <= y[1] && posisiX[1] >= x[0]-17 && posisiY[1] >= y[0]){
            movee = false;
            jatuh = false;
            skor = false;
            cout << "damage" << endl;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(5,boxMoveHorizontal,0);
}

//movement speed box2 vertikal
void boxMoveVertical(int data)
{
    if (start == true){
        if (jatuh == true){
            y[2] -= 0.5f;
            y[3] -= 0.5f;
            bot2 -= 0.5f;
        }
        if (posisiX[0] <= x[3] && posisiY[0] <= y[3] && posisiX[1] >= x[2] && posisiY[1] >= y[2]){
            movee = false;
            jatuh = false;
            skor = false;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(5,boxMoveVertical,0);
}

//menampilkan tulisan skor
void displayTulisanSkor()
{
    glColor3f (1.0, 1.0, 1.0);
    glRasterPos2f(1, 120);
    char *string = "Skor: ";

    while(*string) {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, *string++);
    }
}

//menjumlahkan angka pada skor
void hitungSkor(int data) {
    if (start == true){
        if (skor == true) {
            number++;

            glutPostRedisplay();
            glutTimerFunc(1, hitungSkor, 0);
        }
    }
}

void displaySkor()
{
    glColor3f (1.0, 1.0, 1.0);
    glRasterPos2f(5, 120);

    stringstream strs;
    strs << number;
    string temp_str = strs.str();
    char const* pchar = temp_str.c_str();

    while(*pchar) {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, *pchar++);
    }
}

//menampilkan menu awal
void display_start()
{
    glColor3f(0,0,0);
    glRasterPos2f(60,60);
    char *string = "PRESS A TO START THE GAME";
    while(*string) {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, *string++);
    }
}

void displayMe()
{
    glClear(GL_COLOR_BUFFER_BIT);
    displayRumah();
    displaybox();
    displaybox2();
    displayTulisanSkor();
    displaySkor();
    sapi();
    if (start == false){
        display_start();
    }
    if (posisiX[0] <= x[1]-17 && posisiY[0] <= y[1] && posisiX[1] >= x[0]-17 && posisiY[1] >= y[0]){
        kalah();
    }
    glFlush();
    glutSwapBuffers();
}

void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.8,1.0,1.0);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1520,780);
    glutCreateWindow("Execute");
    gluOrtho2D(0,124,0,124);
    glutDisplayFunc(displayMe);
    glutKeyboardFunc(start_game);
    glutTimerFunc(1,characterController,0);
    glutTimerFunc(1,boxMoveHorizontal,0);
    glutTimerFunc(1,boxMoveVertical,0);
    glutTimerFunc(1,houseMove,0);
    glutTimerFunc(1, hitungSkor, 0);
    myinit();
    glutMainLoop();
    return 0;
}
