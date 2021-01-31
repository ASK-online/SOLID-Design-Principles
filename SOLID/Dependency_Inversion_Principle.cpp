#include <iostream>

class Shape{
public:
  virtual void draw() = 0;
};

class Circle : public Shape{
public:
  void draw(){ 
    std::cout << "circle";
    }
};

class Triangle : public Shape{
public:
  void draw(){ 
    std::cout << "triangle";
    }
};

class Draw{
public:
  void drawShape(Shape *s){
     s->draw();
  }
};

class My_Draw{
public:
Draw *d;

  void draw(std::string s){
    if(s == "triangle")
      d->drawShape(new Triangle);
    else if( s == "circle")
      d->drawShape(new Circle);
    else
      std::cout << " Need shape";
  }

};

int main(){

  My_Draw my;
  my.draw("circle");
  return 0;
}