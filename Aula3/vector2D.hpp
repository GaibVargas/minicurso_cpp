#ifndef MATH_VECTOR2D_HPP
#define MATH_VECTOR2D_HPP

namespace math {

class Vector2D {
public:
    Vector2D(double x, double y):
      x_{x}, y_{y}
    {}

    Vector2D() = default;
    Vector2D(Vector2D const&) = default;

    double x() const
    {
      return x_; // usa this->x_ implicitamente
    }

    double y() const
    {
      return y_;
    }

    Vector2D& invert();
    Vector2D& operator *=(double);
    Vector2D& operator +=(Vector2D const&);

private:
    double x_{0}, y_{0};
};

Vector2D operator -(Vector2D);
Vector2D operator +(Vector2D, Vector2D const&);
Vector2D operator *(Vector2D, double);

}

#endif