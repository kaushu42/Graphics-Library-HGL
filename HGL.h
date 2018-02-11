#ifndef HGL_H
#define HGL_H

#include <GL/glut.h>
#include <stdio.h>
#include <iostream>
#include <cmath>

#include "Color.h"
#include "line.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "ellipse.h"
#define PI 3.1415926535897932384626433

void init();
void point(float x, float y, Color color=WHITE, float b=1,string rotate="FALSE",float angle=0,float xc=0,float yc=0);
void clear(Color color=NONE);
void HGL_run(int argc, char **argv,void (*func)());


#endif
