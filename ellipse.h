#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "HGL.h"
class ellipse
{
private:
  float xc,yc,rx,ry;
  Color color;
public:
  ellipse(float xc,float yc,float rx,float ry, Color color=WHITE,string str="Draw");
  void draw(string rotate="FALSE",float angle=0,float xc=0,float yc=0);
  ellipse translate(float xt,float yt,string str="Draw");
  ellipse scale(float xs,float ys,string str="Draw");
  ellipse rotate(float angle,string str="Draw",float csx=-10000,float csy=-10000);
  ellipse move(float xt,float yt,int time=20,string str="Draw");
  ellipse remove();
};

#endif
