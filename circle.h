#ifndef CIRCLE_H
#define CIRCLE_H
#include "HGL.h"
class circle
{
  float xc,yc,r;
  Color color;
  public:
    circle(float xc,float yc,float r, Color color=WHITE,string str="Draw");
    void draw();
    circle translate(float xt,float yt,string str="Draw");
    circle move(float xt,float yt,int time=20,string str="Draw");
    circle scale(float s,string str="Draw");
    circle remove();
};
#endif
