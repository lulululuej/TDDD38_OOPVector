#pragma once

#include <iostream>

class Vector
{
public:

  Vector(double x = 0.0, double y = 0.0);
  
  Vector& operator+=(Vector const& other);
  Vector& operator-=(Vector const& other);
  Vector& operator*=(double other);
  Vector& operator/=(double other);

  Vector operator-() const;
  
  bool operator==(Vector const& other) const;
  bool operator!=(Vector const& other) const;

  double operator*(Vector const& rhs) const;
  
  double length() const;

  friend std::ostream& operator<<(std::ostream& os, Vector const& other);
  friend std::istream& operator>>(std::istream& is, Vector& other);
  
private:
  
  double x;
  double y;
};

// In any case, it is preferable to declare it as a non-member, to ensure symmetry between the LHS and the RHS of the operation.
Vector operator+(Vector const& lhs, Vector const& rhs);
Vector operator-(Vector const& lhs, Vector const& rhs);
Vector operator*(Vector const& lhs, double rhs);
Vector operator*(double lhs, Vector const& rhs);
Vector operator/(Vector const& lhs, double rhs);
