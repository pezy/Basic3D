///
///@Brief   Check the exercise of 5.13
///@Author  PEZY
///@Date    Sept. 2014
///@See     class B3D::Vec3, "3D Math Primer for Graphics and Game Development"
///

#include <iostream>
#include "Vec3.h"

using B3D::Vec3;
using std::cout; using std::endl;
using B3D::operator *;

int main()
{
  ///> Exercise 5.13.1
  {
    Vec3 va(3, 7, 0);
    va = -va;
    cout << "[" << va.x << "," << va.y << "," << va.z << "]" << endl;

    Vec3 vb(-12, 5, 0);
    cout << B3D::vec3Mag(vb) << endl;

    Vec3 vc(8, -3, 0.5);
    cout << B3D::vec3Mag(vc) << endl;

    Vec3 vd(4, -7, 0);
    vd = 3*vd;
    cout << "[" << vd.x << "," << vd.y << "," << vd.z << "]" << endl;

    Vec3 ve(4, 5, 0);
    ve /= 2;
    cout << "[" << ve.x << "," << ve.y << "," << ve.z << "]" << endl;
  }
  cout << "----------" << endl;
  ///> Exercise 5.13.2
  {
    Vec3 va(-12, 5, 0);
    Vec3 vb(8, -3, 0.5);
    va.normalize();
    vb.normalize();
    cout << "[" << va.x << "," << va.y << "," << va.z << "]" << endl;
    cout << "[" << vb.x << "," << vb.y << "," << vb.z << "]" << endl;
  }
  cout << "----------" << endl;
  ///> Exercise 5.13.3
  {
    Vec3 va1(3, 10, 7);
    Vec3 va2(8, -7, 4);
    Vec3 va = va1 - va2;
    cout << "[" << va.x << "," << va.y << "," << va.z << "]" << endl;

    Vec3 vb1(1, 2, 3);
    Vec3 vb2(2, 10, -6);
    Vec3 vb = 3*vb1 - 4*vb2;
    cout << "[" << vb.x << "," << vb.y << "," << vb.z << "]" << endl;
  }
  cout << "----------" << endl;
  ///> Exercise 5.13.4
  {
    Vec3 va1(3, 10, 7);
    Vec3 va2(8, -7, 4);
    cout << B3D::distance(va1, va2)  << endl;
  }
  cout << "----------" << endl;
  ///> Exercise 5.13.5
  {
    Vec3 vb(-2, 0, 4);
    cout <<  3*vb*(Vec3(8, -2, 1.5) + Vec3(0, 9, 7)) << endl;
  }
  cout << "----------" << endl;
  ///> Exercise 5.13.8
  {
    Vec3 v = B3D::crossProduct(Vec3(3, 10, 7), Vec3(8, -7, 4));
    cout << "[" << v.x << "," << v.y << "," << v.z << "]" << endl;
  }
  cout << "----------" << endl;
  return 0;
}
