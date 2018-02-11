#ifndef LINE_H
#define LINE_H

#include "HGL.h"
using std::string;
class line
{
private:
  float x1,y1,x2,y2;
  Color color;
  float lineCentreX,lineCentreY;
public:
  line(float x1,float y1,float x2,float y2, Color color=WHITE,string str="Draw");
  void draw();

  line translate(float xt,float yt,string str="Draw");
  line scale(float xs,float ys,string str="Draw",float csx=-10000,float csy=-10000);
  line rotate(float angle,string str="Draw",float csx=-10000,float csy=-10000);
  line move(float xt,float yt,int time=20,string str="Draw");
  line remove();
};

#endif
