#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "HGL.h"
using std::string;
class triangle
{
private:
  float x1,y1,x2,y2,x3,y3;
  Color color;
public:
  triangle(float x1,float y1,float x2,float y2,float x3,float y3, Color color=WHITE,string str="Draw");
  void draw();
  triangle translate(float xt,float yt,string str="Draw");
  triangle scale(float xs,float ys,string str="Draw",float csx=-10000,float csy=-10000);
  triangle rotate(float angle,string str="Draw",float csx=-10000,float csy=-10000);
  triangle move(float xt,float yt,int time=20,string str="Draw");
  triangle remove();
  triangle setColor(Color c);
};

#endif
