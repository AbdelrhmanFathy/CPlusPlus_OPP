
class Rectangle {
private:
  double width;
  double height;

public:
  void setWidth(double w) { width = w; }
  void setHeight(double h) { height = h; }
  double getWidth() { return width; }
  double getHeight() { return height; }
  double getArea() { return width * height; }
};
