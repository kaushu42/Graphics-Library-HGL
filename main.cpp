#include"HGL.h"

void display();

int main(int argc, char **argv) {
  HGL_run(argc,argv,display);
}


void display()
{
   circle(200, 200, 100, RED);
   circle(150, 220, 25, GREEN);
    circle(250, 220, 25, GREEN);
    ellipse(200, 150, 60, 10,BLUE);
    rectangle(100, 100, 150, 150);
    glFlush();
    glutSwapBuffers();
}
