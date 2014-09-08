///
///@Class  Vec3
///@Brief  Simple 3D vector class
///@Author PEZY
///@Date   Sept. 2014
///@See   
///

#include <cmath>

namespace B3D
{
class Vec3 {
public:
  Vec3() {}
  Vec3(const Vec3 &v) : x(v.x), y(v.y), z(v.z) {}
  Vec3(float fx, float fy, float fz) : x(fx), y(fy), z(fz) {}

  Vec3 &operator =(const Vec3 &v)
  {
    x = v.x; y = v.y; z = v.z;
    return *this;
  }

  bool operator ==(const Vec3 &v) const
  {
    return x == v.x && y == v.y && z == v.z;
  }
  bool operator !=(const Vec3 &v) const
  {
    return x != v.x || y != v.y || z != v.z;
  }

  void zero() { x = y = z = 0.0f; }
  Vec3 operator -() const { return Vec3(-x, -y, -z); }
  
  Vec3 operator +(const Vec3 &v) const
  {
    return Vec3(x+v.x, y+v.y, z+v.z);
  }  
  Vec3 operator -(const Vec3 &v) const
  {
    return Vec3(x-v.x, y-v.y, z-v.z);
  }
  Vec3 operator *(float f) const
  {
    return Vec3(x*f, y*f, z*f);
  }
  Vec3 operator /(float f) const
  {
    float oneOverF = 1.f / f;
    return Vec3(x*oneOverF, y*oneOverF, z*oneOverF);
  }
  
  Vec3 &operator +=(const Vec3 &v)
  {
    x += v.x; y += v.y; z += v.z;
    return *this;
  }
  Vec3 &operator -=(const Vec3 &v)
  {
    x -= v.x; y -= v.y; z -= v.z;
    return *this;
  }
  Vec3 &operator *=(float f)
  {
    x *= f; y *= f; z *= f;
    return *this;
  }
  Vec3 &operator /=(float f)
  {
    float oneOverF = 1.f/f;
    x *= oneOverF; y *= oneOverF;; z *= oneOverF;;
    return *this;
  }

  void normalize()
  {
    float magSq = x*x + y*y + z*z;
    if (magSq > 0.0f)
    {
      float oneOverMag = 1.0f / std::sqrt(magSq);
      x *= oneOverMag;
      y *= oneOverMag;
      z *= oneOverMag;
    }
  }

  float operator *(const Vec3 &v) const
  {
    return x*v.x + y*v.y + z*v.z;
  }

public:
  float x, y, z;

};

inline float vec3Mag(const Vec3 &v)
{
  return std::sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}

inline Vec3 crossProduct(const Vec3 &a, const Vec3 &b)
{
  return Vec3(
    a.y*b.z - a.z*b.y,
    a.z*b.x - a.x*b.z,
    a.x*b.y - a.y*b.x
  );
}

inline Vec3 operator *(float f, const Vec3 &v)
{
  return Vec3(f*v.x, f*v.y, f*v.z);
}

inline float distance(const Vec3 &a, const Vec3 &b)
{
  float dx = a.x - b.x;
  float dy = a.y - b.y;
  float dz = a.z - b.z;
  return std::sqrt(dx*dx + dy*dy + dz*dz);
}

const Vec3 kZeroVec3;
}
