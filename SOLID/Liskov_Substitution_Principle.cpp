#include <iostream>

class Triangle{
private:
int m_width, m_height;

public:
  Triangle(const int width, const int height): m_width{width} , m_height{height} {}
  int get_width() const { return m_width; }
  int get_height() const { return m_height; }
  int area() const { return m_width * m_height; }
};

class Square : public Triangle{
public:
  Square(int size) : Triangle(size,size) {}

};

void result(Triangle t){

  int w = t.get_width(); 
  int h = t.get_height();

  std::cout << "area = " << t.area() << std::endl;

}

int main(void){

  Triangle t(6,3);
  result(t);

  Square s(5);
  result(s);

  return 0;
}