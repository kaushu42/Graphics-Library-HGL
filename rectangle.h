#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "HGL.h"
using std::string;
class rectangle
{
  float x1,y1,x2,y2,angle;
  Color _color;
public:
  rectangle(float x1,float y1,float x2,float y2,float angle=0,Color color=WHITE,string str="Draw");
  void draw();
  rectangle translate(float xt,float yt,string str="Draw");
  rectangle scale(float xs,float ys,string str="Draw",float csx=-10000,float csy=-10000);
  rectangle rotate(float angle,string str="Draw",float csx=-10000,float csy=-10000);
  rectangle move(float xt,float yt,int time=20,string str="Draw");
  rectangle setColor(Color color);
  rectangle remove();
};
#endif
