// Shape.hpp

#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {
  public:
    // dtor
    // print "SHAPE DELETED<endl>"
    ~Shape();
     // method yang belum diimplementasi, pure virtual
    virtual float area()=0;
    virtual float perimeter()=0;
    virtual void print()=0;
};

#endif
