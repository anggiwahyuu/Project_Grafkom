#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display();

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1600, 900);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Baground");
    glutDisplayFunc(display);
    gluOrtho2D(0,124,0,124);
    glutMainLoop();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);

    //Bagian tanah berwarna coklat
    glColor3ub(169,127,91);
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(0,10);
    glVertex2i(124,10);
    glVertex2i(124,0);
    glEnd();
    glFlush();

    //Bagian rumput yang tampak samping
    glColor3ub(61,204,84);
    glBegin(GL_QUADS);
    glVertex2i(0,10);
    glVertex2i(0,13);
    glVertex2i(124,13);
    glVertex2i(124,10);
    glEnd();
    glFlush();

    //Bagian jalan untuk sapi
    glColor3ub(167,235,86);
    glBegin(GL_QUADS);
    glVertex2i(0,13);
    glVertex2i(0,29);
    glVertex2i(124,29);
    glVertex2i(124,13);
    glEnd();
    glFlush();

    //Bagian jalan (rumput) untuk sapi
    glColor3ub(167,235,86);
    glBegin(GL_QUADS);
    glVertex2i(0,13);
    glVertex2i(0,29);
    glVertex2i(124,29);
    glVertex2i(124,13);
    glEnd();
    glFlush();

    //Bagian lantai rumah
    glColor3ub(160,135,104);
    glBegin(GL_QUADS);
    glVertex2i(5.54,29);
    glVertex2i(5.54,31.5);
    glVertex2i(42,31.5);
    glVertex2i(42,29);
    glEnd();
    glFlush();

    //Bagian bagan rumah
    glColor3ub(180,152,113);
    glBegin(GL_QUADS);
    glVertex2i(6.7,31.5);
    glVertex2i(6.7,60);
    glVertex2i(41.7,60);
    glVertex2i(41.7,31.5);
    glEnd();
    glFlush();

    //Bagian garis kecil diantara bagan rumah dan atap
    glColor3ub(160,135,104);
    glBegin(GL_QUADS);
    glVertex2i(6.7,60);
    glVertex2i(6.7,62);
    glVertex2i(41.7,62);
    glVertex2i(41.7,60);
    glEnd();
    glFlush();

    //Bagian pintu rumah di bagan
    glColor3ub(86,74,58);
    glBegin(GL_QUADS);
    glVertex2i(20,31.5);
    glVertex2i(20,50);
    glVertex2i(27,50);
    glVertex2i(27,31.5);
    glEnd();
    glFlush();

    //garis pintu kiri
    glColor3ub(239,229,217);
    glBegin(GL_QUADS);
    glVertex2i(18,31.5);
    glVertex2i(18,60);
    glVertex2i(19,60);
    glVertex2i(19,31.5);
    glEnd();
    glFlush();

    //garis pintu kanan
    glColor3ub(239,229,217);
    glBegin(GL_QUADS);
    glVertex2i(28,31.5);
    glVertex2i(28,60);
    glVertex2i(29,60);
    glVertex2i(29,31.5);
    glEnd();
    glFlush();

    //garis pintu atas
    glColor3ub(239,229,217);
    glBegin(GL_QUADS);
    glVertex2i(19,60);
    glVertex2i(19,62);
    glVertex2i(28,62);
    glVertex2i(28,60);
    glEnd();
    glFlush();

    //jendela kiri
    glColor3ub(86,74,58);
    glBegin(GL_QUADS);
    glVertex2i(9,40);
    glVertex2i(9,50);
    glVertex2i(15,50);
    glVertex2i(15,40);
    glEnd();
    glFlush();

     //jendela kanan
    glColor3ub(86,74,58);
    glBegin(GL_QUADS);
    glVertex2i(32,40);
    glVertex2i(32,50);
    glVertex2i(38,50);
    glVertex2i(38,40);
    glEnd();
    glFlush();

    //cerobong asap
    glColor3ub(160,135,104);
    glBegin(GL_QUADS);
    glVertex2i(8,62);
    glVertex2i(8,81);
    glVertex2i(12,81);
    glVertex2i(12,62);
    glEnd();
    glFlush();

    //atap 1
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(5.54,62);
    glVertex2i(5.54,64);
    glVertex2i(42,64);
    glVertex2i(42,62);
    glEnd();
    glFlush();

    //atap 2
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(6,64);
    glVertex2i(6,66);
    glVertex2i(41,66);
    glVertex2i(41,64);
    glEnd();
    glFlush();

    //atap 3
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(7,66);
    glVertex2i(7,68);
    glVertex2i(40,68);
    glVertex2i(40,66);
    glEnd();
    glFlush();

    //atap 4
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(8,68);
    glVertex2i(8,70);
    glVertex2i(39,70);
    glVertex2i(39,68);
    glEnd();
    glFlush();

    //atap 5
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(9,70);
    glVertex2i(9,72);
    glVertex2i(38,72);
    glVertex2i(38,70);
    glEnd();
    glFlush();

    //atap 6
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(10,72);
    glVertex2i(10,74);
    glVertex2i(37,74);
    glVertex2i(37,72);
    glEnd();
    glFlush();

    //atap 6
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(11,74);
    glVertex2i(11,76);
    glVertex2i(36,76);
    glVertex2i(36,74);
    glEnd();
    glFlush();

    //atap 7
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(12,76);
    glVertex2i(12,78);
    glVertex2i(35,78);
    glVertex2i(35,76);
    glEnd();
    glFlush();

    //atap 8
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(13,78);
    glVertex2i(13,80);
    glVertex2i(34,80);
    glVertex2i(34,78);
    glEnd();
    glFlush();

    //atap 9
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(14,80);
    glVertex2i(14,82);
    glVertex2i(33,82);
    glVertex2i(33,80);
    glEnd();
    glFlush();

    //atap 10
    glColor3ub(231,214,194);
    glBegin(GL_QUADS);
    glVertex2i(15,82);
    glVertex2i(15,84);
    glVertex2i(32,84);
    glVertex2i(32,82);
    glEnd();
    glFlush();
}

